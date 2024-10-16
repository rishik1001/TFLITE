// Copyright 2024 Google LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <string>

#include <gtest/gtest.h>
#include "absl/strings/match.h"
#include "absl/strings/str_format.h"
#include "absl/strings/string_view.h"
#include "third_party/qairt/include/QNN/QnnTypes.h"
#include "tensorflow/lite/experimental/lrt/core/graph_tools.h"
#include "tensorflow/lite/experimental/lrt/test/common.h"
#include "tensorflow/lite/experimental/lrt/vendors/qualcomm/compiler/IR/qnn_op.h"

namespace {

static constexpr absl::string_view kOpTpl = "simple_%s_op.tflite";
struct OpInfo {
  std::string op_name;
  std::string expected_type_name;
};
// TODOL: b/365299994 - Add "stablehlo_scatter" once muti subgraphs is
// supported.
// clang-format off
const auto kSupportedOps = testing::Values(
    OpInfo{"add", "ElementWiseAdd"},
    OpInfo{"mul", "ElementWiseMultiply"},
    OpInfo{"batch_matmul", "MatMul"},
    OpInfo{"concatenation", "Concat"},
    OpInfo{"div", "ElementWiseDivide"},
    OpInfo{"fully_connected", "FullyConnected"},
    OpInfo{"reshape", "Reshape"},
    OpInfo{"rsqrt", "ElementWiseRsqrt"},
    OpInfo{"select_v2", "ElementWiseSelect"},
    OpInfo{"select", "ElementWiseSelect"},
    OpInfo{"strided_slice", "StridedSlice"},
    OpInfo{"slice", "StridedSlice"},
    OpInfo{"softmax", "Softmax"},
    OpInfo{"sub", "ElementWiseSubtract"},
    OpInfo{"tanh", "Tanh"},
    OpInfo{"transpose", "Transpose"});
// clang-format on

class OpCompatibilityTest : public ::testing::TestWithParam<OpInfo> {};

TEST_P(OpCompatibilityTest, SupportedOpsTest) {
  auto test_params = GetParam();
  std::string model_path = absl::StrFormat(kOpTpl, test_params.op_name);
  auto model = lrt::testing::LoadTestFileModel(model_path);
  ASSERT_RESULT_OK_ASSIGN(auto subgraph,
                          ::graph_tools::GetSubgraph(model.get()));
  ASSERT_RESULT_OK_ASSIGN(auto ops, ::graph_tools::GetSubgraphOps(subgraph));

  Qnn_OpConfig_t qnn_op = lrt::qnn::BuildDefaultOp();
  ASSERT_STATUS_OK(lrt::qnn::LegalizeOp(ops[0], qnn_op));

  EXPECT_TRUE(absl::StrContains(qnn_op.v1.name, test_params.op_name));
  EXPECT_STREQ(qnn_op.v1.packageName, "qti.aisw");
  EXPECT_STREQ(qnn_op.v1.typeName, test_params.expected_type_name.c_str());

  EXPECT_EQ(qnn_op.v1.numOfInputs, 0);
  EXPECT_EQ(qnn_op.v1.numOfOutputs, 0);
  EXPECT_EQ(qnn_op.v1.numOfParams, 0);

  lrt::qnn::ResetOp(qnn_op);
}

INSTANTIATE_TEST_SUITE_P(SupportedOpsTest, OpCompatibilityTest, kSupportedOps);

}  // namespace
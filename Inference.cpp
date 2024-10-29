#include <iostream>
#include "tensorflow/lite/model.h"
#include "tensorflow/lite/interpreter.h"
#include "tensorflow/lite/kernels/register.h"
#include "tensorflow/lite/delegates/flex/delegate.h"
using namespace std;
int main() {
    // Load the model
    cout << "Top Rishik" << endl;
    std::unique_ptr<tflite::FlatBufferModel> model = tflite::FlatBufferModel::BuildFromFile("../auto.tflite");
    if (!model) {
        std::cerr << "Failed to load model" << std::endl;
        return -1;
    }

    // Create an interpreter
    tflite::ops::builtin::BuiltinOpResolver resolver;
    std::unique_ptr<tflite::Interpreter> interpreter;
    tflite::InterpreterBuilder(*model, resolver)(&interpreter);
    if (!interpreter) {
        std::cerr << "Failed to create interpreter" << std::endl;
        return -1;
    }
    
    //tflite::InterpreterBuilder::ApplyDelegates(interpreter);
    cout << "Rishik" << endl;
    ////// Create the Flex delegate
    //TfLiteDelegate flex_delegate = TfLiteDelegateCreate();
    //if (!flex_delegate) {
    //    std::cerr << "Failed to create Flex delegate" << std::endl;
    //    return -1;
    //}

    /*TfLiteDelegate* flex_delegate = create_flex_delegate();
    if (interpreter->ModifyGraphWithDelegate(flex_delegate) != kTfLiteOk) {
        std::cerr << "Failed to modify graph with Flex Delegate." << std::endl;
        return -1;
    }*/

    //////// Add Flex delegate to the interpreter
    //if (interpreter->ModifyGraphWithDelegate(flex_delegate) != kTfLiteOk) {
    //    std::cerr << "Failed to apply Flex delegate" << std::endl;
    //    TfLiteOpaqueDelegateDelete(flex_delegate);  // Clean up delegate if ModifyGraph fails
    //    return -1;
    //}

    // Allocate tensors
    if (interpreter->AllocateTensors() != kTfLiteOk) {
        std::cerr << "Failed to allocate tensors" << std::endl;
        //TfLiteOpaqueDelegateDelete(flex_delegate);  // Clean up delegate if tensor allocation fails
        return -1;
    }

    ////// Run inference
    ////if (interpreter->Invoke() != kTfLiteOk) {
    ////    std::cerr << "Failed to invoke interpreter" << std::endl;
    ////    TfLiteOpaqueDelegateDelete(flex_delegate);  // Clean up delegate if invocation fails
    ////    return -1;
    ////}

    //std::cout << "Model executed successfully with Flex delegate!" << std::endl;

    //// Clean up delegate
    ////TfLiteOpaqueDelegateDelete(flex_delegate);
    cout << "Rishik" << endl;

    return 0;
}

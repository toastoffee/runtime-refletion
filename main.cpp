#include <iostream>
#include "src/class_register.hpp"


struct MyStruct { MyStruct() {}; void func(double) {}; int data; };

MyStruct* newTestStruct(){
    return new MyStruct();
}

int main() {

    ClassRegister<MyStruct> classRegister;
    classRegister.AddConstructor("test", newTestStruct);

    auto s = classRegister.CreateObject("test");

    return 0;
}

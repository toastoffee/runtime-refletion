#include <iostream>
#include "src/object.hpp"


struct MyStruct { MyStruct() {}; void func(double) {}; int data; };

MyStruct* newTestStruct(){
    return new MyStruct();
}

int main() {

    float a = 1.0f;

    auto o = Object(&a);
    return 0;
}

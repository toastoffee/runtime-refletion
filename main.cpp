#include <iostream>
#include "src/type_descriptor.hpp"

struct MyStruct { MyStruct() {}; void func(double) {}; int data; int info;};

int main() {


    TypeDescriptor::GetDescriptor<int>();

    return 0;
}

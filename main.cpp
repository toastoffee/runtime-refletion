#include <iostream>

#include "registration.hpp"

struct MyStruct { MyStruct() {}; void func(double) {}; int data; int info;};

int main() {

    Reflect::Registration::registerClass<MyStruct>("MyStruct");



    return 0;
}

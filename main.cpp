#include <iostream>

#include "registration.hpp"

#include "type_resolver.hpp"


struct MyStruct { MyStruct() {}; void func(double) {}; int data; int* ptr;};

int main() {

    int MyStruct::*p = &MyStruct::data;

    std::cout << TypeResolver::getType<int MyStruct::*>();

//    using type = Reflect::member_pointer_traits_object<int MyStruct::*>;


    return 0;
}

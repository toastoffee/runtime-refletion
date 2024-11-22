#include <iostream>

#include "registration.hpp"

#include "type_resolver.hpp"

struct MyStruct { MyStruct() {}; void func(double) {}; int data; int* ptr;};

int main() {

    std::cout << TypeResolver::getType<int**>();

    return 0;
}

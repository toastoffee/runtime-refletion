#include <iostream>

#include "registration.hpp"

#include "type_resolver.hpp"

#include "type/template_string.hpp"

#include <string>

struct MyStruct { MyStruct() {}; void func(double) {}; int data; int* ptr;};


int main() {

    int MyStruct::*p = &MyStruct::data;

//    std::cout << TypeResolver::getType<int MyStruct::*>();

//    using type = Reflect::member_pointer_traits_object<int MyStruct::*>;

//    std::cout << Reflect::type_name<int MyStruct::*>();

    using S1 = TemplateString<'H', 'i', '!'>;
    using S2 = TemplateString<'U'>;

    auto s = PopFront<S1>::type::data;

    std::cout << s;

    return 0;
}

/**
  ******************************************************************************
  * @file           : type_descriptor.cpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/19
  ******************************************************************************
  */



#include "type_descriptor.hpp"



template<>
TypeDescriptor* TypeDescriptor::GetPrimitiveDescriptor<char>() {
    return new TypeDescriptor("char", sizeof(char));
}

template<>
TypeDescriptor* TypeDescriptor::GetPrimitiveDescriptor<std::string>() {
    return new TypeDescriptor("std::string", sizeof(std::string));
}

template<>
TypeDescriptor* TypeDescriptor::GetPrimitiveDescriptor<int>() {
    return new TypeDescriptor("int", sizeof(int));
}

template<>
TypeDescriptor* TypeDescriptor::GetPrimitiveDescriptor<unsigned int>() {
    return new TypeDescriptor("unsigned int", sizeof(unsigned int));
}

template<>
TypeDescriptor* TypeDescriptor::GetPrimitiveDescriptor<float>() {
    return new TypeDescriptor("float", sizeof(float));
}

template<>
TypeDescriptor* TypeDescriptor::GetPrimitiveDescriptor<double>() {
    return new TypeDescriptor("double", sizeof(double));
}

void StructTypeDescriptor::AddField(const char *fieldName, size_t offset, TypeDescriptor *type) {

}

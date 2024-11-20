/**
  ******************************************************************************
  * @file           : register_entity.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/20
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_REGISTER_ENTITY_HPP
#define RUNTIME_REFLETION_REGISTER_ENTITY_HPP

#include "type_descriptor.hpp"
#include "register.hpp"

class RegisterEntity {
private:
    StructTypeDescriptor* _structTypeDescriptor;

    explicit RegisterEntity(StructTypeDescriptor* structTypeDescriptor) : _structTypeDescriptor(structTypeDescriptor) {}

public:

    template<typename T>
    static RegisterEntity& reg(const char* typeName);

    RegisterEntity& field(const char* fieldName, size_t offset, TypeDescriptor* descriptor);
};


#endif //RUNTIME_REFLETION_REGISTER_ENTITY_HPP

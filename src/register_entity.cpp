/**
  ******************************************************************************
  * @file           : register_entity.cpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/20
  ******************************************************************************
  */



#include "register_entity.hpp"

RegisterEntity &RegisterEntity::field(const char *fieldName, size_t offset, TypeDescriptor *descriptor) {

    return *this;
}

template<typename T>
RegisterEntity &RegisterEntity::reg(const char *typeName) {
    auto* descriptor = new StructTypeDescriptor(typeName, sizeof(T));
    RegisterEntity entity(descriptor);

    Register::Instance()->_typeMap[typeName] = descriptor;

    return entity;
}


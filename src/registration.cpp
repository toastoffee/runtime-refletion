/**
  ******************************************************************************
  * @file           : registration.cpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/20
  ******************************************************************************
  */



#include "registration.hpp"

using namespace Reflect;

template<typename T>
RegisterHelper Registration::registerClass(const char *className) {

    // 1. create helper
    auto descriptor = new StructTypeDescriptor(className, sizeof(T));
    RegisterHelper helper(descriptor);

    // 2. store type descriptor


    return helper;
}
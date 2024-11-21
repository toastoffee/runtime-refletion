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

void Registration::AddClass(const char *className, StructTypeDescriptor *descriptor) {
    Registration::Instance()->_classMap[className] = descriptor;
}

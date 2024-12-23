/**
  ******************************************************************************
  * @file           : register.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/19
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_REGISTER_HPP
#define RUNTIME_REFLETION_REGISTER_HPP

#include "utils/singleton.h"
#include "type_descriptor.hpp"

#include <string>
#include <map>

class Register : public Singleton<Register>
{
public:
    std::map<std::string, TypeDescriptor *> _typeMap;

public:

};


#endif //RUNTIME_REFLETION_REGISTER_HPP

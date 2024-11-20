/**
  ******************************************************************************
  * @file           : register_handler.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/20
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_REGISTER_HELPER_HPP
#define RUNTIME_REFLETION_REGISTER_HELPER_HPP

#include "register.hpp"

namespace Reflect {

class RegisterHelper {

private:
    StructTypeDescriptor* _structTypeDescriptor;

public:

    explicit RegisterHelper(StructTypeDescriptor* structTypeDescriptor) :
            _structTypeDescriptor(structTypeDescriptor) { }


};

}


#endif //RUNTIME_REFLETION_REGISTER_HELPER_HPP
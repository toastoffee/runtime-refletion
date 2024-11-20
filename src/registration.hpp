/**
  ******************************************************************************
  * @file           : registration.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/20
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_REGISTRATION_HPP
#define RUNTIME_REFLETION_REGISTRATION_HPP

#include <map>

#include "register_helper.hpp"

namespace Reflect {

// store all reflection infos and help register class

class Registration {

public:

    template<typename T>
    RegisterHelper registerClass(const char* className);
    
};

}


#endif //RUNTIME_REFLETION_REGISTRATION_HPP

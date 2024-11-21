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

class Registration : Singleton<Registration> {
public:

    std::map<std::string, StructTypeDescriptor *> _classMap;

    static void AddClass(const char* className, StructTypeDescriptor* descriptor);

public:

    template<typename T>
    static RegisterHelper registerClass(const char* className);

};


    template<typename T>
    RegisterHelper Registration::registerClass(const char *className) {

        // 1. create helper
        auto descriptor = new StructTypeDescriptor(className, sizeof(T));
        RegisterHelper helper(descriptor);

        // 2. store type descriptor
        AddClass(className, descriptor);

        return helper;
    }

}


#endif //RUNTIME_REFLETION_REGISTRATION_HPP

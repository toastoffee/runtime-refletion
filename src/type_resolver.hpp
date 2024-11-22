/**
  ******************************************************************************
  * @file           : type_resolver.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/21
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_TYPE_RESOLVER_HPP
#define RUNTIME_REFLETION_TYPE_RESOLVER_HPP

#include <type_traits>
#include <string>

class TypeResolver {

public:
    template<typename T>
    static std::string getType();

};

template<typename T>
std::string TypeResolver::getType() {
    if(std::is_pointer<T>::value)
    {
        return "isPointer:" + getType<typename std::remove_pointer<T>::type>();
    }

    else {
        return "var";
    }
}



#endif //RUNTIME_REFLETION_TYPE_RESOLVER_HPP

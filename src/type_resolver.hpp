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

#include "type/utils.hpp"

class TypeResolver {

public:
    template<typename T>
    static std::string getType();

};

template<typename T>
std::string TypeResolver::getType() {

    if(std::is_lvalue_reference<T>::value) {
        return "&{" + getType<typename std::remove_reference<T>::type>() + "}";
    }
    else if(std::is_rvalue_reference<T>::value) {
        return "&&{" + getType<typename std::remove_reference<T>::type>() + "}";
    }
    else if(std::is_const<T>::value && std::is_volatile<T>::value) {
        return "const volatile{" + getType<
                typename std::remove_const<
                typename std::remove_volatile<T>::type>::type>() + "}";
    }
    else if(std::is_const<T>::value) {
        return "const{" + getType<typename std::remove_const<T>::type>() + "}";
    }
    else if(std::is_volatile<T>::value) {
        return "volatile{" + getType<typename std::remove_volatile<T>::type>() + "}";
    }
    else if(std::is_pointer<T>::value) {
        return "*{" + getType<typename std::remove_pointer<T>::type>() + "}";
    }
    else if(std::is_member_pointer<T>::value) {
        return getType<typename Reflect::member_pointer_traits_object<T>>()
                + "::{" + getType<typename Reflect::member_pointer_traits_value<T>>() + "}";
    }
    else {
//        return Reflect::type_name<T>();
        return "var";
    }

}



#endif //RUNTIME_REFLETION_TYPE_RESOLVER_HPP

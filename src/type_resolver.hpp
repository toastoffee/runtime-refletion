/**
  ******************************************************************************
  * @file           : type_resolver.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/19
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_TYPE_RESOLVER_HPP
#define RUNTIME_REFLETION_TYPE_RESOLVER_HPP


template<typename T>
class TypeResolver {
    typedef T* (*Constructor)(void);
};


#endif //RUNTIME_REFLETION_TYPE_RESOLVER_HPP

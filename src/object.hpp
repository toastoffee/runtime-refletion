/**
  ******************************************************************************
  * @file           : object.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/20
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_OBJECT_HPP
#define RUNTIME_REFLETION_OBJECT_HPP

#include <typeinfo>
#include <iostream>

class Object {
private:
public:
    template<typename T>
    Object(T* t);
};

template<typename T>
Object::Object(T *t) {
    auto type = typeid(T).name();

    std::cout << type << std::endl;
}


#endif //RUNTIME_REFLETION_OBJECT_HPP

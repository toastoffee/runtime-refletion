/**
  ******************************************************************************
  * @file           : type_descriptor.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/19
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_TYPE_DESCRIPTOR_HPP
#define RUNTIME_REFLETION_TYPE_DESCRIPTOR_HPP

#include <string>
#include <map>

class TypeDescriptor {
private:
    const char* _name;
    size_t _size;

    TypeDescriptor(const char* name, size_t size) : _name(name), _size(size) {}

    virtual ~TypeDescriptor() = default;

    std::string getName() const { return _name; }
    
};


#endif //RUNTIME_REFLETION_TYPE_DESCRIPTOR_HPP

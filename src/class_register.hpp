/**
  ******************************************************************************
  * @file           : class_register.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/19
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_CLASS_REGISTER_HPP
#define RUNTIME_REFLETION_CLASS_REGISTER_HPP

#include <string>
#include <map>

template<typename ClassName>
class ClassRegister {
public:
    typedef ClassName* (*Constructor)();

private:
    typedef std::map<std::string, Constructor> ClassMap;
    ClassMap constructor_map_;

public:

    void AddConstructor(const std::string class_name, Constructor constructor)
    {
        typename ClassMap::const_iterator it = constructor_map_.find(class_name);

        constructor_map_[class_name] = constructor;
    }

    ClassName* CreateObject(const std::string class_name) const
    {
        typename ClassMap::const_iterator it = constructor_map_.find(class_name);

        return(*(it->second))();
    }
};


#endif //RUNTIME_REFLETION_CLASS_REGISTER_HPP

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
    const char* _typeName;
    size_t _size;

public:
    TypeDescriptor(const char* typeName, size_t size) : _typeName(typeName), _size(size) {}

    std::string getName() const { return _typeName; }

public:

    template<typename T,typename Enable = typename std::enable_if<
        std::is_same<T, char>           ::value ||
        std::is_same<T, std::string>    ::value ||
        std::is_same<T, int>            ::value ||
        std::is_same<T, unsigned int>   ::value ||
        std::is_same<T, float>          ::value ||
        std::is_same<T, double>         ::value >::type>
    static TypeDescriptor* GetDescriptor()
    {
        return GetPrimitiveDescriptor<T>();
    }

public:
    template<typename T>
    static TypeDescriptor* GetPrimitiveDescriptor();

};

class StructTypeDescriptor : public TypeDescriptor {
    struct Field {
        const char* fieldName;
        size_t offset;
        TypeDescriptor* type;
    };

    std::vector<Field> fields;

public:

    StructTypeDescriptor(const char *typeName, size_t size);

    void AddField(const char* fieldName, size_t offset, TypeDescriptor* type);
};




#endif //RUNTIME_REFLETION_TYPE_DESCRIPTOR_HPP

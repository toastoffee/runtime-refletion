/**
  ******************************************************************************
  * @file           : template_str.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/22
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_TEMPLATE_STRING_HPP
#define RUNTIME_REFLETION_TEMPLATE_STRING_HPP

template<char... chars>
struct TemplateString {
public:
    static constexpr const char* Data() noexcept { return data; }

private:
    static constexpr char data[]{chars...};

    typedef TemplateString<data[0]> a;

    
};


#endif //RUNTIME_REFLETION_TEMPLATE_STRING_HPP

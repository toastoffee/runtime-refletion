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

#include <iostream>
#include <array>

//--Template String Basics
template<char... chars>
struct TemplateString {
public:
    static constexpr const char* Data() noexcept { return data; }

public:
    static constexpr char data[]{ chars..., '\0'};
};

template<char... chars>
constexpr char TemplateString<chars...>::data[];

//--Template String Maker




//-- Extractor
template<size_t... indices>
struct Indices;

template<typename S, typename I>
struct Extractor;

template<char... chars, size_t... indices>
struct Extractor<TemplateString<chars...>, Indices<indices...>> {
    static constexpr char val[] = {TemplateString<chars...>::Data()[indices]...};
};

//--Concatenate
template<typename S1, typename S2>
struct Concat;

template<char... chars1, char... chars2>
struct Concat<TemplateString<chars1...>, TemplateString<chars2...>> {
    using type = TemplateString<chars1..., chars2...>;
};


//-- Pop front & Pop back
template<typename T>
struct PopFront;

template<char... chars>
struct PopFront<TemplateString<chars...>>;

template<char front, char... rest>
struct PopFront<TemplateString<front, rest...>> {
    using type = TemplateString<rest...>;
};




//template<char... chars>
//constexpr auto popN(TemplateString<chars...> s, size_t n) noexcept {
//    if(n <= 0){
//        return TemplateString<chars...>{};
//    } else {
//        return popN( typename PopFront<decltype(s)>::type{}, n - 1);
//    }
//}



//template<char... chars>
//constexpr auto popN(TemplateString<chars...> , size_t n) noexcept {
//    if(n <= 0){
//        return TemplateString<chars...>{};
//    } else {
//        return popN( typename PopFront<TemplateString<chars...>>::type{}, n - 1);
//    }
//}


//-- find specific elements



#endif //RUNTIME_REFLETION_TEMPLATE_STRING_HPP

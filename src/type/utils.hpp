/**
  ******************************************************************************
  * @file           : utils.hpp
  * @author         : toastoffee
  * @brief          : None
  * @attention      : None
  * @date           : 2024/11/22
  ******************************************************************************
  */



#ifndef RUNTIME_REFLETION_UTILS_HPP
#define RUNTIME_REFLETION_UTILS_HPP

#include <type_traits>
#include <string>
#include <string_view>

namespace Reflect{

    // type name using marco
    template<typename T>
    std::string function_signature() {
        return __PRETTY_FUNCTION__ ;
    }

    template<typename T>
    constexpr std::string_view func_signature() noexcept {
        return std::string_view{__PRETTY_FUNCTION__ };
    }

    template<typename T>
    constexpr const char* func_signature() noexcept {
        return __PRETTY_FUNCTION__;
    }

    template<typename T>
    constexpr std::string_view type_name() {


        return std::string_view{__PRETTY_FUNCTION__} ;
    }


//    template<typename T>
//    std::string type_name() {
//        auto signature = function_signature<T>();
//
//        // cut off
//        int start_idx = signature.find('=', 0) + 2;
//        int end_idx = signature.find(']', 0);
//
//        return signature.substr(start_idx, end_idx - start_idx);
//    }


    // member pointer traits
    template<typename T> struct member_pointer_traits;
    template<typename T> using member_pointer_traits_object = typename member_pointer_traits<T>::object;
    template<typename T> using member_pointer_traits_value = typename member_pointer_traits<T>::value;

    template<typename T>
    struct member_pointer_traits {
        using object = T;
        using value = T;
    };

    template<typename T, typename U>
    struct member_pointer_traits<T U::*> {
        using object = U;
        using value = T;
    };

}


#endif //RUNTIME_REFLETION_UTILS_HPP

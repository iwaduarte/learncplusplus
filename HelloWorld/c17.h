#pragma once

#include <array>
#include <string_view>
#include <tuple>
#include <type_traits>


namespace a::b::c
{
	inline constexpr std::string_view str{ "hello" };

}


 template <typename... T>
 std::tuple<std::size_t, std::common_type_t<T...>> sum(T... args)
 {
	 return { sizeof...(T), (args + ...) };
 }


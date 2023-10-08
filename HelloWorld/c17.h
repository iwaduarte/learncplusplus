#pragma once

#include <array>

namespace a::b::c
{
    inline constexpr std::string_view str{ "hello" };
}

template <typename... T>
std::tuple<std::size_t, std::common_type_t<T...>> sum(T... args);




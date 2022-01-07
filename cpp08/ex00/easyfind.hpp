//
// Created by Ariane on 07/01/2022.
//

#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle)
{
	return (find(haystack.begin(), haystack.end(), needle));
}

#endif //CPP08_EASYFIND_HPP

//
// Created by Ariane on 07/01/2022.
//

#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP
/*
Make a template function called easyfind, templated on a type T, that takes a T
and an int.
Assume the T is a container of int, and find the first occurrence of the second parameter in the first parameter.
If it can’t be found, handle the error either using an exception or using an error return
value. Take ideas from how standard containers work.
Of course, you will provide a main function that tests it thoroughly.
 */
#include <algorithm>

template <typename T>
T & easyfind(T &haystack, int needle)
{
	return (find(haystack.begin(), haystack.end(), needle));
}



#endif //CPP08_EASYFIND_HPP

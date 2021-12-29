//
// Created by Ariane on 29/12/2021.
//

#ifndef CPP07_ITER_HPP
#define CPP07_ITER_HPP

#include <cstdio>

template <typename T>
void add_2(T &nb)
{
	nb += 2;
}

template <typename T>
void iter(T *array, int length, void (*fun)(T &array_element))
{
	for (int i = 0; i < length; i++)
		fun(array[i]);
}

#endif //CPP07_ITER_HPP

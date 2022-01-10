/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:02:58 by ariane            #+#    #+#             */
/*   Updated: 2022/01/10 18:03:02 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

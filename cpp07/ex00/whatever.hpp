/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:02:50 by ariane            #+#    #+#             */
/*   Updated: 2022/01/10 18:02:54 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP07_WHATEVER_HPP
#define CPP07_WHATEVER_HPP

template <typename T>
void swap(T & first, T & second)
{
	T temp;

	temp = first;
	first = second;
	second = temp;
}

template <typename T>
T const & min(T const & value1, T const & value2)
{
	return (value1 < value2 ? value1 : value2);
}

template <typename T>
T const & max(T const & value1, T const & value2)
{
	return (value2 >= value1 ? value2 : value1);
}

#endif //CPP07_WHATEVER_HPP

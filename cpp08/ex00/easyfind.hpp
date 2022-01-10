/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:03:37 by ariane            #+#    #+#             */
/*   Updated: 2022/01/10 18:03:41 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP08_EASYFIND_HPP
#define CPP08_EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle)
{
	return (find(haystack.begin(), haystack.end(), needle));
}

#endif //CPP08_EASYFIND_HPP

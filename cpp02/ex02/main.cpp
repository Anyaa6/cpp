/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:27:33 by ariane            #+#    #+#             */
/*   Updated: 2021/11/29 14:46:05 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed c = Fixed(12.56f);
	Fixed d(13.256f);
	Fixed z = c + d;

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << (c + d) << std::endl;
	std::cout << z << std::endl;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	Fixed q(Fixed(30) / Fixed(3));
	std::cout << q << std::endl;
	// std::cout << Fixed::max(a, b) << std::endl;
	return 0;
}
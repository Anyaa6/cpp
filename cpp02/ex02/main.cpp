/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:27:33 by ariane            #+#    #+#             */
/*   Updated: 2021/12/01 12:24:43 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	//=========================================================================
	std::cout << "\n\nMy own tests" << std::endl;
	
	Fixed c = Fixed(12.56f);
	Fixed d(13.256f);
	Fixed z = c + d;
	std::cout << "c = " << c << "\td = " << d << "\tz = c + d = " << z << std::endl;
	
	std::cout << "\n\nARITHMETIC OPERATIONS================" << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "Fixed(5.05f) * Fixed(2) = " << Fixed(5.05f) * Fixed(2) << std::endl;
	std::cout << "Fixed(0.05f) * Fixed(2) = " << Fixed(0.05f) * Fixed(2) << std::endl;
	std::cout << "Fixed(2) / Fixed(3) = " << Fixed(2) / Fixed(3) << std::endl;

	std::cout << "\n\nCOMPARISONS ================" << std::endl;
	if (c < d)
		std::cout << "c is < than d" << std::endl;
	else
		std::cout << "c is >= than d" << std::endl;
	
	std::cout << (z < c ? "z < c" : "z >= c") << std::endl;
	std::cout << (c < z ? "c < z" : "c >= z") << std::endl;
	std::cout << (c <= z ? "c <= z" : "c > z") << std::endl;
	std::cout << (c >= z ? "c >= z" : "c < z") << std::endl;
	std::cout << (c > z ? "c > z" : "c <= z") << std::endl;
	std::cout << (c == z ? "c == z" : "c != z") << std::endl;
	std::cout << (c == c ? "c == c" : "c != c") << std::endl;
	
	std::cout << "\n\nINCREMENT DECREMENT ================" << std::endl;
	std::cout << "c = " << c << "\tc++ = " << c++ << "\tc = " << c << std::endl;
	std::cout << "c = " << c << "\tc-- = " << c-- << "\tc = " << c << std::endl;
	std::cout << "c = " << c << "\t++c = " << ++c << "\tc = " << c << std::endl;
	std::cout << "c = " << c << "\t--c = " << --c << "\tc = " << c << std::endl;

	std::cout << "\n\nMAX MIN CONST OR NOT ================" << std::endl;
	Fixed const m = Fixed(12.5f);
	Fixed const n = Fixed(72.326f);
	Fixed r(12);	
	Fixed x(14);	
	
	std::cout << Fixed::min(m, n) << std::endl;
	std::cout << Fixed::min(r, x) << std::endl;
	return 0;
}
//
// Created by Ariane on 29/12/2021.
//

#include <iostream>
#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;

	float   x = 12.5;
	float   y = 16.5;

	swap(x, y);
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << min<int>(x, y) << std::endl;
	std::cout << "max( x, y ) = " << max<int>(x, y) << std::endl;
	std::cout << std::endl;

	return 0;
}
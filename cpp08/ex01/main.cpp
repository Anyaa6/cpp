//
// Created by Ariane on 07/01/2022.
//

//Your main will be way more thorough than this. You have to test at the very
//least with 10000 numbers. More would be a good thing.
#include <iostream>
#include "Span.hpp"

//test by passing range of iterators
int main() {
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}


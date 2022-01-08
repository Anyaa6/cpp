//
// Created by Ariane on 07/01/2022.
//

#include <iostream>
#include "Span.hpp"

int main() {
	Span sp = Span(5);

	//try calling a span function on an empty vector
	try {
		sp.shortestSpan();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	sp.addNumber(4);
	sp.addNumber(2);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	//try adding an extra number
	try {
		sp.addNumber(11);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	//============================================
	Span bigger = Span(14000);

	//Adding number through iterators
	bigger.addNumber(sp.begin(), sp.end());

	//Adding as many numbers as possible
	try {
		for (int i = 0; i < 14000; i++)
			bigger.addNumber(i);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << bigger.shortestSpan() << std::endl;
	std::cout << bigger.longestSpan() << std::endl;
}

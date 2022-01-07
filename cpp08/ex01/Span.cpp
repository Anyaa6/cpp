//
// Created by Ariane on 07/01/2022.
//

#include "Span.hpp"
#include <vector>

#include <iostream>//a enlever
/*
 *
 * Constructors, Destructors, Getters
 */
Span::Span(unsigned int N) : _fixedSize(N) {
	_array = std::vector<int>();
}

Span::Span() {}
Span::~Span() {}

Span::Span(const Span &to_copy) : _fixedSize(to_copy.getSize()) {
	_array = std::vector<int>(to_copy._array);
}

Span &Span::operator=(const Span &to_copy) {
	_array = std::vector<int>(to_copy._array);
	_fixedSize = to_copy.getSize();
	return (*this);
}

unsigned int const &Span::getSize() const {
	return _fixedSize;
}

/*
 * Functions
 */

void Span::addNumber(int value) {
	if (_array.size() == _fixedSize)
		throw (std::overflow_error("Span is already full"));
	_array.push_back(value);
}

//Need to finish longest and shortest span
int Span::longestSpan() const {
	if (_array.size() < 2)
		throw (Span::NotEnoughValues());
//	std::sort(_array.begin(), _array.end());
	return (0);
}

int Span::shortestSpan() const {
	if (_array.size() < 2)
		throw (Span::NotEnoughValues());
	//if adjacent_find != _array.end() --> return 0
	return 0;
}

const char *Span::NotEnoughValues::what() const throw() {
	return "Not enough values to call Span functions";
}

//
// Created by Ariane on 07/01/2022.
//

#include "Span.hpp"
#include <vector>
#include <iterator>
#include <algorithm>
#include <limits>

/*
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

int Span::longestSpan() {
	if (_array.size() < 2)
		throw (Span::NotEnoughValues());
	std::sort(_array.begin(), _array.end());
	return (*(--_array.end()) - *_array.begin());
}

int Span::shortestSpan(){
	if (_array.size() < 2)
		throw (Span::NotEnoughValues());
	std::sort(_array.begin(), _array.end());
	if (std::adjacent_find(_array.begin(), _array.end()) != _array.end())
		return 0;

	int 	span = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = _array.begin(); it < --_array.end(); it++)
	{
		if (*std::next(it) - *it < span)
			span = *std::next(it) - *it;
	}
	return span;
}

std::vector<int>::iterator Span::begin() {
	return _array.begin();
}

std::vector<int>::iterator Span::end() {
	return _array.end();
}

const char *Span::NotEnoughValues::what() const throw() {
	return "Not enough values to call Span functions";
}

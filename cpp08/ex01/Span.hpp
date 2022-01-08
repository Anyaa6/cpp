//
// Created by Ariane on 07/01/2022.
//

#ifndef CPP08_SPAN_HPP
#define CPP08_SPAN_HPP

#include <vector>

class Span {
public :
	Span(unsigned int N);
	Span(Span const &to_copy);
	Span &operator=(Span const &to_copy);
	virtual ~Span();

	//getter
	unsigned int const & getSize() const;

	//allows to get iterator to private _array
	std::vector<int>::iterator begin();
	std::vector<int>::iterator end();

	//sort needed at entry of shortest and longestSpan
	int shortestSpan();
	int longestSpan();
	void addNumber(int value); //should say no if already full, do NOT sort

	//add numbers by passing a range of iterators
	template<class InputIterator>
	void addNumber(InputIterator first, InputIterator last);

	class NotEnoughValues : public std::exception
	{
		virtual const char* what() const throw();
	};

private:
	std::vector<int> _array;
	unsigned int _fixedSize;
	Span();
};

template<class InputIterator>
void Span::addNumber(InputIterator first, InputIterator last) {
	int nbAddedElements = std::distance(first, last);

	if (nbAddedElements + _array.size() > _fixedSize)
		throw (std::overflow_error("Trying to add too many elements to Span"));

	_array.insert(_array.end(), first, last);
}

#endif //CPP08_SPAN_HPP

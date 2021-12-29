//
// Created by Ariane on 29/12/2021.
//

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

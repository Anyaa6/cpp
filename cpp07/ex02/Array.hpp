//
// Created by Ariane on 04/01/2022.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

/*
Your code must never access non allocated memory.
 */

#include <stdexcept>

template<typename T>
class Array {
public :
	Array<T>();
	explicit Array<T>(unsigned int n);
	~Array<T>();
	//below DEEP COPIES
	//Array<T>(Array<T> const &to_copy);
	//Array<T> &operator=(Array<T> const &to_copy);
	T &operator[](int index);
	const unsigned int & getSize() const;

private:
	unsigned int _size;
	int *_array;
};

/*
 * DECLARATION
 */

template<typename T>
Array<T>::Array() {
	_size = 0;
	_array = nullptr; //or new T[1] and array[0] = 0 ? "creates an empty array"
}

template<typename T>
Array<T>::~Array<T>() {
	if (_array)
		delete [] _array;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	_array = new T[_size]();
}

template<typename T>
T &Array<T>::operator[](int index) {
	//static_cast ok car un int negatif rentrera forcement dans un unsigned
	//condition index < 0 car cast d'un int negatif en unsigned est trop aleatoire
	if (index < 0 || static_cast<unsigned int>(index) >= _size)
		throw std::out_of_range("Index is out of range");
	return _array[index];
}

template<typename T>
const unsigned int & Array<T>::getSize() const {
	return _size;
}

#endif //CPP07_ARRAY_HPP

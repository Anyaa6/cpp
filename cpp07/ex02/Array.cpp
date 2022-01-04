//
// Created by Ariane on 04/01/2022.
//

#include "Array.hpp"

template<typename T>
Array<T>::Array() {
	_array = nullptr; //or new T[1] and array[0] = 0 ?
}

template<typename T>
Array<T>::~Array<T>() {
	if (_array)
		delete [] _array;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = 0;
}

//a terminer
template<typename T>
T &Array<T>::operator[](int index) {
	if (index >= _size)
		throw (std::exception &e);
	return _array[index];
}





//
// Created by Ariane on 04/01/2022.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

#include <stdexcept>

template<typename T>
class Array {
public :
	Array<T>();
	explicit Array<T>(unsigned int n);
	~Array<T>();

	T &operator[](int index) const;

	Array<T>(Array<T> const &to_copy);
	Array<T> &operator=(Array<T> const &to_copy);

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
T &Array<T>::operator[](int index) const{
	if (index < 0 || static_cast<unsigned int>(index) >= _size)
		throw std::out_of_range("Index is out of range");
	return _array[index];
}

template<typename T>
const unsigned int & Array<T>::getSize() const {
	return _size;
}

template<typename T>
Array<T>::Array(const Array<T> &to_copy) {
	_size = to_copy.getSize();
	_array = new int[_size]();
	for (unsigned int i = 0; i < to_copy.getSize(); i++)
		_array[i] = to_copy[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &to_copy) {
	_size = to_copy.getSize();
	_array = new int[_size]();
	for (unsigned int i = 0; i < to_copy.getSize(); i++)
		_array[i] = to_copy[i];
	return (*this);
}

#endif //CPP07_ARRAY_HPP

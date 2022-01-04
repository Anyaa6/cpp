//
// Created by Ariane on 04/01/2022.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

/*
 * Write a class template Array that contains elements of type T and that allows the
following behavior:
• Construction with no parameter: creates an empty array.
• Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then
display *a.)
• Construction by copy and assignment operator. In both cases, modifying one of
the two arrays after copy/assignment won’t affect anything in the other array. DEEP COPY
• You MUST use the operator new[] for your allocation. You must not do preventive
allocation. Your code must never access non allocated memory.
• Elements are accessible through the operator[].
• When accessing an element with the operator[], if this element is out of the limits,
a std::exception is thrown.
• A member function size that returns the number of elements in the array. This
member function takes no parameter and does not modify the current instance in
any way.
Wrap your work into an executable that proves that your class template works as
intended.
 */

template<typename T>
class Array {
public :
	Array<T>();
	Array<T>(unsigned int n);
	~Array<T>();
	Array<T>(Array<T> const &to_copy);
	Array<T> &operator=(Array<T> const &to_copy);
	T &operator[](int index);

	unsigned int size() const;

private:
	unsigned int _size;
	int *_array;
};

#endif //CPP07_ARRAY_HPP

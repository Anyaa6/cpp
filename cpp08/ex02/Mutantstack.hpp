//
// Created by Ariane on 10/01/2022.
//

#ifndef CPP08_MUTANTSTACK_HPP
#define CPP08_MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public :
	//Coplien form
	MutantStack() {};
	MutantStack(MutantStack const & to_copy) : std::stack<T>(to_copy) {};
	MutantStack &operator=(MutantStack const &to_copy); //definition below
	virtual ~MutantStack() {};

	//to go from writing MutantStack<T>::container_type::iterator to MutantStack<T>::iterator
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	//iterators
	iterator begin() {return (this->c.begin());};
	iterator end() {return (this->c.end());};

	reverse_iterator rbegin() {return (this->c.rbegin());};
	reverse_iterator rend() {return (this->c.rend());};

	const_iterator cbegin() {return (this->c.cbegin());};
	const_iterator cend() {return (this->c.cend());};

	const_reverse_iterator crbegin() {return (this->c.crbegin());};
	const_reverse_iterator crend() {return (this->c.crend());};

};

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &to_copy) {
	*this = to_copy;
	return *this;
}


#endif //CPP08_MUTANTSTACK_HPP

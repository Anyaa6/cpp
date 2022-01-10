/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:04:24 by ariane            #+#    #+#             */
/*   Updated: 2022/01/10 18:04:26 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "\nTesting random functions inherited from stack" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of the stack : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of the stack : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(76);

	std::cout << "\nPrinting every value of stack with iterators" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "Value : " << *it << std::endl;
		++it;
	}

	std::cout << "\nPrinting every value of stack with reverse iterators" << std::endl;
	MutantStack<int>::reverse_iterator itr = mstack.rbegin();
	MutantStack<int>::reverse_iterator itre = mstack.rend();
	++itr;
	--itr;
	while (itr != itre)
	{
		std::cout << "Value : " << *itr << std::endl;
		++itr;
	}

	std::cout << "\nTesting copy constructors" << std::endl;
	std::stack<int> s(mstack); //copy constructor
	std::stack<int> z = mstack; //copy through operator overload
	std::cout << s.top() << std::endl;
	std::cout << z.top() << std::endl;

	//testing with string stack
	std::cout << "\nTesting string stack" << std::endl;
	MutantStack<std::string> dstack;

	dstack.push("first string");
	dstack.push("Second string");
	dstack.push("Third string");
	std::cout << "Poping last added string : " << dstack.top() << std::endl;
	std::cout << "Printing string at begin iterator : " << *dstack.begin() << std::endl;

	std::cout << "\n=====================================" << std::endl;
	std::cout << "Replacing Mutant by vector and using iterators the same way" << std::endl;
	std::vector<int> vector_stack;
	vector_stack.push_back(5);
	vector_stack.push_back(5);
	vector_stack.push_back(3);
	vector_stack.push_back(737);
	vector_stack.push_back(76);

	std::cout << "\nPrinting every value of vector with iterators" << std::endl;
	std::vector<int>::iterator itl = vector_stack.begin();
	std::vector<int>::iterator itle = vector_stack.end();
	++itl;
	--itl;
	while (itl != itle)
	{
		std::cout << "Value : " << *itl << std::endl;
		++itl;
	}
	return 0;
}
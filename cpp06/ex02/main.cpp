/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:29:25 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/21 15:57:54 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <string>
#include <iostream>

class Base {
	public : virtual ~Base(){}
	};
	
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	Base	*ptr;
	srand(time(NULL));
	int random = rand() % 3;
    if (random == 0)
	{
		std::cout << "Generate created A class" << std::endl;
		ptr = new A;
	}
	else if (random == 1)
	{
		
		std::cout << "Generate created B class" << std::endl;
		ptr = new B;
	}
	else
	{

		std::cout << "Generate created C class" << std::endl;
		ptr = new C;
	}
	return ptr;
}

void identify(Base * p)
{
	A	*A_type = dynamic_cast<A *>(p);
	B	*B_type = dynamic_cast<B *>(p);
	C	*C_type = dynamic_cast<C *>(p);
	
	std::cout << "Identify by pointer" << std::endl;
	if (A_type)
		std::cout << "A" << std::endl;
	else if (B_type)
		std::cout << "B" << std::endl;
	else if (C_type)
		std::cout << "C" << std::endl;
}

void identify( Base & p)
{
	std::cout << "Identify by reference" << std::endl;
	try
	{
		A &A_type = dynamic_cast<A &>(p);
		(void)A_type;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		B &B_type = dynamic_cast<B &>(p);
		(void)B_type;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		C &C_type = dynamic_cast<C &>(p);
		(void)C_type;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	
}

int main()
{
	Base *ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	return 0;
}
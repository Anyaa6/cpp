/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:04:31 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/19 10:58:35 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat		James(12, "James");
	Form			certificate(12, 23, "certificate");

	std::cout << James << std::endl;
	std::cout << certificate << std::endl;
	try
	{
		James.signForm(certificate);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	Bureaucrat		Alain(150, "Alain");
	std::cout << Alain << std::endl;
	Form			birth(25, 25, "birth");
	std::cout << birth << std::endl;
	
	std::cout << "\nAlain tries to sign the form ==========" << std::endl;
	try
	{
		Alain.signForm(birth);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\nTry to create a form with a low grade ==========" << std::endl;
	try
	{
		Form		fake(600, 600, "fake_contract");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\nTry to create a form with a high grade ==========" << std::endl;
	try
	{
		Form		super_random_form(-11, -11, "lol");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:04:31 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/17 16:06:44 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat		James(12, "James");

	std::cout << James << std::endl;
	James.incrementGrade();
	std::cout << "after incrementation : " << James << std::endl;
	
	James.decrementGrade();
	std::cout << "after decrementation : " << James << std::endl;
	try
	{
		Bureaucrat Brad(156, "Brad");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Brad(0, "Brad");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Brad(-12, "Brad");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
}
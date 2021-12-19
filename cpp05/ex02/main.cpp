/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:04:31 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/19 12:31:23 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat		James(12, "James");
	ShrubberyForm			christmas("livingRoom");   
	PresidentialForm 		pardon("GuiltyPerson");
	RobotomyForm 		stupid("stupid");

	std::cout << James << std::endl;
	std::cout << "\nShrubbery ======" << std::endl;
	std::cout << christmas << std::endl;
	James.signForm(christmas);
	James.executeForm(christmas);
	
	std::cout << "\nPresidential ======" << std::endl;
	std::cout << pardon << std::endl;

	James.executeForm(pardon);
	std::cout << std::endl;
	James.signForm(pardon);
	James.executeForm(pardon);
	Bureaucrat 		Paul(1, "Paul");
	std::cout << Paul << std::endl;
	Paul.executeForm(pardon);
	
	std::cout << "\nRobotomy ======" << std::endl;
	std::cout << stupid << std::endl;
	James.executeForm(stupid);
	James.signForm(stupid);
	James.executeForm(stupid);
}
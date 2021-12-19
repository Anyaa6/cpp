/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:04:31 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/19 12:53:38 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern		JeanClaude;
	Form 		*createdByIntern;
	Bureaucrat	Pierre(5, "Pierre");
	
	JeanClaude.makeForm("HouseDemolitionForm", "NeighboorsHouse");
	createdByIntern = JeanClaude.makeForm("RobotomyRequestForm", "My neighboor");
	Pierre.signForm(*createdByIntern);
	Pierre.executeForm(*createdByIntern);	
}
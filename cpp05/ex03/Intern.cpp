/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:36:01 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 12:50:29 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

Form * Intern::makeForm(std::string formName, std::string target)
{
    std::string		forms[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	int				i;
	Form            *requestedForm = nullptr;
    
	for (i = 0; i < 4; i++)
	{
		if (formName == forms[i])
			break;
	}
	switch (i)
	{
		case 0:
			requestedForm = new ShrubberyForm(target);
            break;
		case 1:
			requestedForm = new PresidentialForm(target);
            break;
		case 2:
			requestedForm = new RobotomyForm(target);
            break;
		default:
			std::cout << "< " << formName << " > is an unknown form type" << std::endl;
	}
    return requestedForm;
}

Intern::Intern()
{

}

Intern::Intern(Intern const &to_copy)
{
    (void)to_copy;
}

Intern & Intern::operator=(Intern const &to_copy)
{
    (void)to_copy;
    return (*this);
}

Intern::~Intern()
{

}

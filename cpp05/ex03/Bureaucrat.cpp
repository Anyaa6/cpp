/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:05:00 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/19 12:01:04 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


Bureaucrat::Bureaucrat(int grade, std::string name): _name(name)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat : Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat : Grade too low");
}

std::ostream & operator<<(std::ostream &cout, Bureaucrat const &bureaucrat)
{
	cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return cout;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	_grade--;
	if (_grade < 1)
		throw (GradeTooHighException());
}

void Bureaucrat::decrementGrade()
{
	_grade++;
	if (_grade > 150)
		throw (GradeTooLowException());
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getStatus() == true)
	{
		std::cout << "Form already signed" << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << _name << " cannot sign the Form <" << form.getName() << "> because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm (Form const & form)
{
	if (form.getStatus() == false)
	{
		std::cout << "Form <" << form.getName() << "> is not signed and cannot be executed" << std::endl;
		return ;
	}
	try
	{
		form.execute(*this);
		std::cout << _name << " successuflly executed Form : " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << _name << " cannot execute the Form <" << form.getName() << "> because " << e.what() << std::endl;
	}
}

//Canonical Form
Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & to_copy): _name(to_copy.getName()), _grade(to_copy.getGrade())
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & to_copy)
{
	_grade = to_copy.getGrade();
	return (*this);
}

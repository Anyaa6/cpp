/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:05:00 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/17 16:29:01 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


Bureaucrat::Bureaucrat(int grade, std::string name): _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
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
		throw (Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrementGrade()
{
	_grade++;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:35:08 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/17 17:17:56 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

std::string Form::getName() const
{
	return _name;
}

int Form::getSigningGrade() const
{
	return _grade_to_sign;
}

int Form::getExecutingGrade() const
{
	return _grade_to_execute;	
}

bool Form::getStatus() const
{
	return _signed;	
}

Form & Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade_to_sign)
		throw (Form::GradeTooLowException());
	_signed = true;
	return (*this);
}

Form::Form(int grade_execute, int grade_to_sign, std::string name): _name(name), _grade_to_execute(grade_execute), _grade_to_sign(grade_to_sign), _signed(false)
{
	if (_grade_to_execute < 1 || _grade_to_sign < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (_grade_to_execute > 150 || _grade_to_sign > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Form::Form(Form const &to_copy): _name(to_copy.getName()), _grade_to_execute(to_copy.getExecutingGrade()), _grade_to_sign(to_copy.getSigningGrade()), _signed(to_copy.getStatus())
{
}

Form & Form::operator=(Form const &to_copy)
{
	_signed = to_copy.getStatus();
	return (*this);
}

Form::~Form()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for the Form");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for the Form");
}

std::ostream & operator<<(std::ostream &cout, Form const &form)
{
	cout << "< " << form.getName() << " > form is " << 
	((form.getStatus() == false) ? "not signed" : "signed") << std::endl 
	<< "execution grade : " << form.getExecutingGrade() << std::endl
	<< "signing grade : " << form.getSigningGrade() << std::endl;
	return (cout);
}

Form::Form():_name("no"), _grade_to_execute(1), _grade_to_sign(1)
{
}
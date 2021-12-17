/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:05:55 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/17 16:57:49 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
		std::string const 	_name;	
		int					_grade;
		Bureaucrat();

	public :
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		void signForm(Form &form);

		Bureaucrat(int grade, std::string name);
		Bureaucrat(Bureaucrat const & to_copy);
		Bureaucrat & operator=(Bureaucrat const & to_copy);
		~Bureaucrat();
	
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream &cout, Bureaucrat const &bureaucrat);

#endif
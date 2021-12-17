/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:10:35 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/17 16:57:09 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		std::string const	_name;
		int	const			_grade_to_execute;
		int	const			_grade_to_sign;
		bool				_signed;
		Form();

	public :
		std::string getName() const;
		int getSigningGrade() const;
		int getExecutingGrade() const;
		bool getStatus() const;

		Form & beSigned(Bureaucrat &bureaucrat);

		Form(int grade_execute, int grade_to_sign, std::string name);
		Form(Form const &to_copy);
		Form & operator=(Form const &to_copy);
		~Form();

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream &cout, Form const &form);

#endif
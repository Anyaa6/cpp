/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 15:05:55 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/17 15:59:58 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>

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
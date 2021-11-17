/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:58:17 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/17 13:54:53 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen()
{
	fun_ptr[0] = &Karen::_debug;
	fun_ptr[1] = &Karen::_info;
	fun_ptr[2] = &Karen::_warning;
	fun_ptr[3] = &Karen::_error;
}

Karen::~Karen()
{
}

void Karen::_debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-"\
	<< "pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::_info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You "\
	<< "don’t put enough! If you did I would not have to ask for it!"\
	<< std::endl;
}

void Karen::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "\
	<< "been coming here for years and you just started working here last month." \
	<< std::endl;
}

void Karen::_error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now."\
	<< std::endl;
}

void Karen::complain( std::string level )
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*fun_ptr[i])();
			return ;	
		}
	}
	std::cout << "Wrong level" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:38:52 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 12:29:36 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &to_copy) : AMateria(to_copy._type)
{
}

Ice &Ice::operator=(Ice const &to_copy)
{
	(void)to_copy;
	return (*this);
}

Ice::~Ice()
{
}

Ice* Ice::clone() const
{
	Ice		*cloned = new Ice();

	*cloned = (*this);
	return (cloned);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << "*" << std::endl;
}

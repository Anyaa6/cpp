/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:02:06 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 13:06:54 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &to_copy) : AMateria(to_copy._type)
{
}

Cure &Cure::operator=(Cure const &to_copy)
{
	(void)to_copy;
	return (*this);
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{
	Cure		*cloned = new Cure();

	*cloned = (*this);
	return (cloned);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
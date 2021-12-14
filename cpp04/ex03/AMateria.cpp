/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:28:46 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/14 16:55:47 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const & type): _type(type)
{
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return _type;
}

// void AMateria::use(ICharacter& target)
// {
	
// }

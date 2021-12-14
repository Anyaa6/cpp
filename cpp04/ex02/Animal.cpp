/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:26:49 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 15:09:40 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal class constructor" << std::endl;
    _type = "Undefined type";
}

AAnimal & AAnimal::operator=(AAnimal const &to_copy)
{
    std::cout << "AAnimal class assignation overload constructor" << std::endl;
    _type = to_copy._type;    
    return (*this);
}

AAnimal::AAnimal(AAnimal const &to_copy)
{
    std::cout << "AAnimal class copy constructor" << std::endl;
    _type = to_copy._type;    
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal class Destructor" << std::endl;
}

std::string AAnimal::getType() const
{
    return (_type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:35:51 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 16:57:03 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal class constructor" << std::endl;
    _type = "Undefined type";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &to_copy)
{
    std::cout << "WrongAnimal class assignation overload constructor" << std::endl;
    _type = to_copy._type;    
    return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &to_copy)
{
    std::cout << "WrongAnimal class copy constructor" << std::endl;
    _type = to_copy._type;    
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal class Destructor" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}


void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal has undefined sound" << std::endl;
}

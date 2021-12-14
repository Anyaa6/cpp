/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:26:49 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 12:57:19 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal class constructor" << std::endl;
    _type = "Undefined type";
}

Animal & Animal::operator=(Animal const &to_copy)
{
    std::cout << "Animal class assignation overload constructor" << std::endl;
    _type = to_copy._type;    
    return (*this);
}

Animal::Animal(Animal const &to_copy)
{
    std::cout << "Animal class copy constructor" << std::endl;
    _type = to_copy._type;    
}

Animal::~Animal()
{
    std::cout << "Animal class Destructor" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}

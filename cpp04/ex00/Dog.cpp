/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:44:07 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:23:45 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog class constructor" << std::endl;
    _type = "Dog";
}

Dog & Dog::operator=(Dog const &to_copy)
{
    std::cout << "Dog class assignation overload constructor" << std::endl;
    _type = to_copy._type;
    return (*this);
}

Dog::Dog(Dog const &to_copy)
{
    std::cout << "Dog class copy constructor" << std::endl;
    _type = to_copy._type;    
}

Dog::~Dog()
{
    std::cout << "Dog class Destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog does mia miaw" << std::endl;
}
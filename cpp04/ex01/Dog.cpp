/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:44:07 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 12:46:53 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog class constructor" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog & Dog::operator=(Dog const &to_copy)
{
    std::cout << "Dog class assignation overload constructor" << std::endl;
    _type = to_copy._type;
    _brain = new Brain();
    for (int i = 0; i < NUMBER_OF_IDEAS; i++)
        _brain->ideas[i] = to_copy._brain->ideas[i];
    return (*this);
}

Dog::Dog(Dog const &to_copy)
{
    std::cout << "Dog class copy constructor" << std::endl;
    _type = to_copy._type;
    _brain = new Brain();
    for (int i = 0; i < NUMBER_OF_IDEAS; i++)
        _brain->ideas[i] = to_copy._brain->ideas[i];
}

Dog::~Dog()
{
    std::cout << "Dog class Destructor" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog does waf waf" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (_brain);
}

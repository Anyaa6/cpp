/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:44:07 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 12:49:20 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat class constructor" << std::endl;
    _type = "Cat";
    _brain = new Brain();
}

Cat & Cat::operator=(Cat const &to_copy)
{
    std::cout << "Cat class assignation overload constructor" << std::endl;
    _type = to_copy._type;
    _brain = new Brain();
    for (int i = 0; i < NUMBER_OF_IDEAS; i++)
        _brain->ideas[i] = to_copy._brain->ideas[i];
    return (*this);
}

Cat::Cat(Cat const &to_copy)
{
    std::cout << "Cat class copy constructor" << std::endl;
    _type = to_copy._type;
    _brain = new Brain();
    for (int i = 0; i < NUMBER_OF_IDEAS; i++)
        _brain->ideas[i] = to_copy._brain->ideas[i]; 
}

Cat::~Cat()
{
    std::cout << "Cat class Destructor" << std::endl;
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "Cat does mia miaw" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (_brain);
}
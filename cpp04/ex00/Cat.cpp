/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:44:07 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 16:53:33 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat class constructor" << std::endl;
    _type = "Cat";
}

Cat & Cat::operator=(Cat const &to_copy)
{
    std::cout << "Cat class assignation overload constructor" << std::endl;
    _type = to_copy._type;
    return (*this);
}

Cat::Cat(Cat const &to_copy)
{
    std::cout << "Cat class copy constructor" << std::endl;
    _type = to_copy._type;    
}

Cat::~Cat()
{
    std::cout << "Cat class Destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat does mia miaw" << std::endl;
}
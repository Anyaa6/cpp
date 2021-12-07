/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:43:49 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 16:53:58 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat class constructor" << std::endl;
    _type = "WrongCat";
}

WrongCat & WrongCat::operator=(WrongCat const &to_copy)
{
    std::cout << "WrongCat class assignation overload constructor" << std::endl;
    _type = to_copy._type;
    return (*this);
}

WrongCat::WrongCat(WrongCat const &to_copy)
{
    std::cout << "WrongCat class copy constructor" << std::endl;
    _type = to_copy._type;    
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat class Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat does mia miaw" << std::endl;
}
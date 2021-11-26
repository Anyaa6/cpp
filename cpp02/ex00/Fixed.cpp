/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:13:12 by ariane            #+#    #+#             */
/*   Updated: 2021/11/26 11:33:17 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const Fixed &to_copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = to_copy;
}

Fixed &     Fixed::operator=(Fixed const &to_copy)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = to_copy.getRawBits();
    return (*this);   
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:13:12 by ariane            #+#    #+#             */
/*   Updated: 2021/11/29 13:39:52 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(int const given_int)
{
    std::cout << "Int constructor called" << std::endl;
	this->_value = 0;
	_value = given_int << 8;
}

Fixed::Fixed(const float given_float)
{
    std::cout << "Float constructor called" << std::endl;
	this->_value = 0;
	this->_value = (round(given_float * (1 << this->_point_position)));
}

int Fixed::toInt(void) const
{
	return (this->_value >> 8);
}

float Fixed::toFloat(void) const
{
	return ((double)this->_value / (double)(1 << this->_point_position));
}


Fixed &     Fixed::operator=(Fixed const &to_copy)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = to_copy.getRawBits();
    return (*this);   
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

std::ostream & operator<<(std::ostream &cout, Fixed const &fixed)
{
	cout << fixed.toFloat();
	return cout;
}
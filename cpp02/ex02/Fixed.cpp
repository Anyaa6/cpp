/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:13:12 by ariane            #+#    #+#             */
/*   Updated: 2021/11/29 14:49:18 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &to_copy)
{
    *this = to_copy;
}

Fixed::Fixed(int const given_int)
{
	this->_value = 0;
	_value = given_int << 8;
}

Fixed::Fixed(const float given_float)
{
	this->_value = 0;
	this->_value = (round(given_float * (1 << this->_point_position)));
}

int Fixed::toInt(void) const
{
	return (this->_value >> 8);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_point_position));
}

Fixed &     Fixed::operator=(Fixed const &to_copy)
{
    this->_value = to_copy.getRawBits();
    return (*this);   
}

Fixed Fixed::operator+(Fixed const &to_copy) const
{
	Fixed		tmp;

	tmp._value = this->_value + to_copy._value;
	return tmp;
}

Fixed Fixed::operator-(Fixed const &to_copy) const
{
	Fixed		tmp;

	tmp._value = this->_value - to_copy._value;
	return tmp;
}

Fixed Fixed::operator*(Fixed const &to_copy) const
{
	Fixed		tmp;

	tmp._value = this->_value * to_copy._value / (1 << this->_point_position);
	return (tmp);
}

Fixed Fixed::operator/(Fixed const &to_copy) const
{
	Fixed		tmp;

	tmp._value = (this->_value << this->_point_position) / (to_copy._value << this->_point_position);
	tmp._value = tmp._value >> this->_point_position;
	return (tmp);
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

std::ostream & operator<<(std::ostream &cout, Fixed const &fixed)
{
	cout << fixed.toFloat();
	return cout;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:13:12 by ariane            #+#    #+#             */
/*   Updated: 2021/12/01 12:42:43 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/*
** CONSTRUCTOR DESTRUCTOR =====================================================
*/

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
	this->_value = (roundf(given_float * (1 << this->_point_position)));
}


Fixed &     Fixed::operator=(Fixed const &to_copy)
{
    this->_value = to_copy.getRawBits();
    return (*this);   
}

/*
** ARITHMETIC OPERATIONS + - * / ==============================================
*/

Fixed Fixed::operator+(Fixed const &nb) const
{
	Fixed		tmp;

	tmp._value = this->_value + nb._value;
	return tmp;
}

Fixed Fixed::operator-(Fixed const &nb) const
{
	Fixed		tmp;

	tmp._value = this->_value - nb._value;
	return tmp;
}

//verify it works
Fixed Fixed::operator*(Fixed const &nb) const
{
	Fixed		tmp;

	tmp._value = this->_value * nb._value / (1 << this->_point_position);
	return (tmp);
}

Fixed Fixed::operator/(Fixed const &nb) const
{
	Fixed		tmp(this->toFloat() / nb.toFloat());

	return (tmp);
}

/*
** COMPARISON OPERATORS >, <, >=, <=, == and != ===============================
*/

bool Fixed::operator<(Fixed const &nb) const
{
	if (this->_value < nb._value)
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const &nb) const
{
	if (this->_value <= nb._value)
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const &nb) const
{
	if (this->_value >= nb._value)
		return true;
	return false;
}

bool Fixed::operator>(Fixed const &nb) const
{
	if (this->_value > nb._value)
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &nb) const
{
	if (this->_value == nb._value)
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &nb) const
{
	if (this->_value != nb._value)
		return true;
	return false;
}

/*
** DECREMENT INCREMENT ========================================================
*/

Fixed &Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	
	tmp = *this;
	_value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	
	tmp = *this;
	_value--;
	return (tmp);
}

/*
** MIN MAX - FUN OVERLOADING ==================================================
*/

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}


/*
** MEMBER FUNCTIONS  ==========================================================
*/

int Fixed::toInt(void) const
{
	return (this->_value >> 8);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_point_position));
}

int Fixed::getRawBits(void) const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

/*
** OPERATOR << ================================================================
*/

std::ostream & operator<<(std::ostream &cout, Fixed const &fixed)
{
	cout << fixed.toFloat();
	return cout;
}
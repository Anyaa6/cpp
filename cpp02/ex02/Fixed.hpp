/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:10:11 by ariane            #+#    #+#             */
/*   Updated: 2021/12/01 12:20:16 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//int size is 4 bytes = 32 bits
class   Fixed
{
  public:
    Fixed();
    Fixed(const Fixed &to_copy);
    Fixed(const int given_int);
    Fixed(const float given_float);
    ~Fixed();
	
    Fixed &operator=(Fixed const &to_copy);
    Fixed operator+(Fixed const &nb) const;
    Fixed operator-(Fixed const &nb) const;
    Fixed operator*(Fixed const &nb) const;
    Fixed operator/(Fixed const &nb) const;
	
	bool operator<(Fixed const &nb) const;
	bool operator<=(Fixed const &nb) const;
	bool operator>=(Fixed const &nb) const;
	bool operator>(Fixed const &nb) const;
	bool operator==(Fixed const &nb) const;
	bool operator!=(Fixed const &nb) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed const& min(Fixed const &a, Fixed const &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static Fixed const& max(Fixed const &a, Fixed const &b);
	
	float toFloat(void) const;
	int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    int                 _value;
    static const int    _point_position = 8;
};

std::ostream & operator<<(std::ostream &cout, Fixed const &fixed);
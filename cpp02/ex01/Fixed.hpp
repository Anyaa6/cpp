/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:10:11 by ariane            #+#    #+#             */
/*   Updated: 2021/11/29 13:13:14 by abonnel          ###   ########.fr       */
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
	float toFloat(void) const;
	int toInt(void) const;
    Fixed &operator=(Fixed const &to_copy);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    int                 _value;
    static const int    _point_position = 8;
};

std::ostream & operator<<(std::ostream &cout, Fixed const &fixed);
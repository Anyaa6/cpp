/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:10:11 by ariane            #+#    #+#             */
/*   Updated: 2021/11/26 11:24:46 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class   Fixed
{
  public:
    Fixed();
    Fixed(const Fixed &to_copy);
    Fixed &operator=(Fixed const &to_copy);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

  private:
    int                 _value;
    static const int    _point_position = 8;    
};
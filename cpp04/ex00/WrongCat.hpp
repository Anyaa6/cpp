/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:36:25 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 16:37:41 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        WrongCat(const WrongCat & to_copy);
        WrongCat &operator=(WrongCat const & to_copy);
        ~WrongCat();
        void makeSound() const;
};

#endif
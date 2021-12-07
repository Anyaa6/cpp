/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:36:25 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:23:33 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(const Dog & to_copy);
        Dog &operator=(Dog const & to_copy);
        ~Dog();
        virtual void makeSound() const;
};

#endif
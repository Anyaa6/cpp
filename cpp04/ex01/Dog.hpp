/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:36:25 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:37:20 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(const Dog & to_copy);
        Dog &operator=(Dog const & to_copy);
        virtual ~Dog();
        virtual void makeSound() const;
    
    private :
        Brain *_brain;
};

#endif
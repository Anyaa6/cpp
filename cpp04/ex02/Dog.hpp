/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:36:25 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 15:10:08 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public :
        Dog();
        Dog(const Dog & to_copy);
        Dog &operator=(Dog const & to_copy);
        virtual ~Dog();
        virtual void makeSound() const;
		Brain *getBrain() const;
    
    private :
        Brain *_brain;
};

#endif
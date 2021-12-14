/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:36:25 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 12:49:32 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat & to_copy);
        Cat &operator=(Cat const & to_copy);
        virtual ~Cat();
        virtual void makeSound() const;
		Brain *getBrain() const;

    private :
        Brain *_brain;
};

#endif
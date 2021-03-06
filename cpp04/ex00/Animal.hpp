/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:43 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:04:46 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
    public :
        Animal();
        Animal &operator=(Animal const &to_copy);
        Animal(Animal const &to_copy);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
        
    protected :
        std::string _type;
};

#endif
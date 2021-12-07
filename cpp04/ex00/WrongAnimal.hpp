/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:35:31 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 16:56:41 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal {
    public :
        WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &to_copy);
        WrongAnimal(WrongAnimal const &to_copy);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
        
    protected :
        std::string _type;
};

#endif
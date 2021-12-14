/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:55:43 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 15:09:40 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <string>

class AAnimal {
    public :
        AAnimal();
        AAnimal &operator=(AAnimal const &to_copy);
        AAnimal(AAnimal const &to_copy);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        std::string getType() const;
        
    protected :
        std::string _type;
};

#endif
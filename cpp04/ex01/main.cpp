/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:51:30 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:54:34 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    // Animal *animal_array = new Animal[6];
    /*
    Your main will create and fill an Array of Animal half of it will be Dog and the other
    half will be Cat.
    Before exit, your main will loop over this array and delete every Animal.
    You must delete directly Cat and Dog as an Animal.

    +test to verify copy is DEEP so change first idea of copied cat or dog
    */
    
    std::cout << std::endl;
    delete j;//should not create a leak
    delete i;
}
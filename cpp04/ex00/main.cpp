/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:51:30 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:22:51 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    
    std::cout << "Type is : " << j->getType() << " " << std::endl;
    std::cout << "Type is : " << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete i;
    
    std::cout << "\nWrong Animal sounds ==============="<< std::endl;
    const WrongAnimal* metaWrong = new WrongAnimal();
    const WrongAnimal* iWrong = new WrongCat();
    WrongCat      badCat;
    std::cout << std::endl;
    
    std::cout << "Type is : " << iWrong->getType() << " " << std::endl;
    iWrong->makeSound();
    metaWrong->makeSound();
    badCat.makeSound();
    std::cout << std::endl;

    delete metaWrong;
    delete iWrong;
    std::cout << std::endl;
}
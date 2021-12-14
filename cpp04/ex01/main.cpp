/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:51:30 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 12:52:56 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define NUMBER_OF_ANIMALS 5

int main()
{
    const Animal* 	j = new Dog();
    const Animal* 	i = new Cat();
	Animal			**array;
	std::cout << std::endl;

	//Initialize animal array, half dogs, half cats
	array = new Animal*[NUMBER_OF_ANIMALS];
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << std::endl;
	
	//Show that we can get proper Sound from different animals using Animal ptr
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		array[i]->makeSound();
	std::cout << std::endl;

	//Loop to delete animals array
   	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete array[i];
	delete array;
    
	//delete const animals
    std::cout << std::endl;
    delete j;
    delete i;
    std::cout << std::endl;
	
    //Show that copy is deep
    Dog 	chihuahua;
	Dog		golden_retriever(chihuahua);
	
    std::cout << std::endl << "Show that copy is Deep ==========" << std::endl;
	golden_retriever.getBrain()->ideas[0] = "Golden retriever idea";
	std::cout << golden_retriever.getBrain()->ideas[0] << std::endl;
	std::cout << chihuahua.getBrain()->ideas[0] << std::endl;
    std::cout << std::endl;
}
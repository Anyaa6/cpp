/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:51:30 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 15:11:36 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define NUMBER_OF_AAnimalS 5

int main()
{
	//AAnimal		bird; Doesn't work bc it is an abstract class
    const AAnimal* 	j = new Dog();
    const AAnimal* 	i = new Cat();
	AAnimal			**array;
	std::cout << std::endl;

	//Initialize AAnimal array, half dogs, half cats
	array = new AAnimal*[NUMBER_OF_AAnimalS];
	for (int i = 0; i < NUMBER_OF_AAnimalS; i++)
	{
		if (i % 2 == 0)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	std::cout << std::endl;
	
	//Show that we can get proper Sound from different AAnimals using AAnimal ptr
	for (int i = 0; i < NUMBER_OF_AAnimalS; i++)
		array[i]->makeSound();
	std::cout << std::endl;

	//Loop to delete AAnimals array
   	for (int i = 0; i < NUMBER_OF_AAnimalS; i++)
		delete array[i];
	delete array;
    
	//delete const AAnimals
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 13:56:11 by ariane            #+#    #+#             */
/*   Updated: 2021/12/05 18:29:11 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int *create_nb_array(int const nb_cells)
{
    int *array = new int(nb_cells);

    for (int i = 0; i < 10; i++)
        array[i] = i;

    return array;            
}

int main()
{
    int *array;
    std::string line;

    
    array = create_nb_array(10);

    std::string filename("../ressources.txt");
    std::cout << filename << std::endl;
    std::ifstream flux(filename);

    if (flux)
    {
        flux.seekg(150, std::ios::beg);
        getline(flux, line);
        std::cout << "line = " << line << std::endl;
        flux.seekg(-12, std::ios::cur);
        getline(flux, line);
        std::cout << "line = " << line << std::endl;
         
    }
    else
        std::cout <<"flux not opened" << std::endl;

    for (int i = 0; i < 10; i++)
        std::cout << array[i] << std::endl;
}
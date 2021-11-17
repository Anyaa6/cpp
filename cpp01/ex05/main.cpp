/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:58:19 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/17 13:57:18 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main()
{
	Karen	Karen;
	
	Karen.complain("INFO");
	std::cout << std::endl;
	Karen.complain("DEBUG");
	std::cout << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl;
	Karen.complain("ERROR");
	std::cout << std::endl;
	Karen.complain("WARNING");
	std::cout << std::endl;
	Karen.complain("WARNING ");
	return (0);
}
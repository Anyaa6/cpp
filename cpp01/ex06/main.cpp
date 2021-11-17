/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:58:19 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/17 14:15:08 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Missing log level" << std::endl;
		return (1);
	}
	Karen			Karen;
	std::string		log_lvl = std::string(argv[1]);

	Karen.complain(log_lvl);
	return (0);
}
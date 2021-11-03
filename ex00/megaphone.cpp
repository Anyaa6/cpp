/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:26:44 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/03 10:37:05 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int         i = 1;
    int         y = 0;
    std::string megaphoned_string;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[i])
    {
        y = 0;
        while (argv[i][y])
        {
            megaphoned_string += toupper(argv[i][y]);
            y++;
        }
        i++;
    }
    std::cout << megaphoned_string << std::endl;
    return 0;
}
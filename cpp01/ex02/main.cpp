/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:40:59 by ariane            #+#    #+#             */
/*   Updated: 2021/11/17 14:48:41 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>

int main()
{
    std::string     str = "HI THIS IS BRAIN";
    std::string     *str_ptr = &str;
    std::string     &str_ref = str;
    
    std::cout << "String address :\t" << &str << std::endl;
    std::cout << "String address by ptr :\t" << str_ptr << std::endl;
    std::cout << "String address by ref :\t" << &str_ref << std::endl;

    std::cout << "String :\t" << str << std::endl;
    std::cout << "String by ptr :\t" << *str_ptr << std::endl;
    std::cout << "String by ref :\t" << str_ref << std::endl;
    
}
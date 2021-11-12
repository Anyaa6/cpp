/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:06:52 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/12 15:21:17 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string		file_name;
	std::string		s1;
	std::string		s2;

	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "Wrong parameter entry" <<std::endl;
		return (1);
	}
	file_name = std::string(argv[1]);
	s1 = std::string(argv[2]);
	s2 = std::string(argv[3]);

	std::ifstream	input_file_stream(file_name);
	if (!input_file_stream.is_open())
	{
		std::cerr << "File does not exist" << std::endl;
		return (1);
	}
	std::ofstream	output_file_stream(file_name + ".replace");
	//if file does not exist display errror msg
}

/*
Make a program called replace that takes a filename and two strings, let’s call them
s1 and s2, which are NOT empty.

It will open the file, and write its contents to FILENAME.replace, after replacing
every occurrence of s1 with s2.

All the member functions of the class std::string are allowed, except replace. Use
them wisely!

Of course, you will handle errors as best you can. Do not use the C file manipulation
functions, because that would be cheating, and cheating’s bad, m’kay?
You will turn in some test files to show your program works.
*/
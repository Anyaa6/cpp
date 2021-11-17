/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:06:52 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/17 12:44:05 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	check_if_replace_file_exists(std::string file_name)
{
	std::ifstream	check_if_file_exists(file_name + ".replace");
	if (check_if_file_exists.is_open())
	{
		std::cout << "File " << file_name << ".replace already exists, " \
		<< "file overwritten" << std::endl;
		check_if_file_exists.close();
	}
}

void	replace_str(std::string s1, std::string s2, std::ifstream *in, std::ofstream *out)
{
	std::string		string;
	size_t			s1_position;
	
	while (getline(*in, string))
	{
		s1_position = string.find(s1);
		if (s1_position == std::string::npos)
			*out << string << "\n";
		else
		{
			while ((s1_position = string.find(s1)) != std::string::npos)
			{
				string.erase(s1_position, s1.length());
				string.insert(s1_position, s2);
			}
			*out << string << "\n";
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cerr << "Wrong parameter entry" <<std::endl;
		return (1);
	}
	std::string		file_name = std::string(argv[1]);
	std::string		s1 = std::string(argv[2]);
	std::string		s2 = std::string(argv[3]);

	std::ifstream	input_file_stream(file_name);
	if (!input_file_stream.is_open())
	{
		std::cerr << "File does not exist" << std::endl;
		return (1);
	}
	check_if_replace_file_exists(file_name);
	std::ofstream	output_file(file_name + ".replace", std::fstream::trunc);
	replace_str(s1, s2, &input_file_stream, &output_file);
	input_file_stream.close();
	output_file.close();
	return (0);
}

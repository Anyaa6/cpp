/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_type.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:11:58 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/27 13:40:55 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool is_char(std::string const &arg)
{
    if ((arg[0] >= 32 && arg[0] < 127) && arg[1] == '\0')
        return true;
    return false;
}

bool is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

bool is_int(std::string const &arg)
{
    int i = 0;
    if (arg[i] == '+' || arg[i] == '-')
        i++;
    for (; i < static_cast<int>(arg.size()); i++)
    {
        if (!is_digit(arg[i]))
            return false;
    }
    return true;
}

bool is_float(std::string const &arg)
{
    int i = 0;
    int dot = 0;
    int last_char = static_cast<int>(arg.size() - 1);
    
    if (arg[last_char] != 'f')
        return false;
    if (arg == "+inff" || arg == "inff" || arg == "-inff" || arg == "nanf")
        return true;
    if (arg[i] == '+' || arg[i] == '-')
        i++;
    for (; i <= last_char; i++)
    {
        if (arg[i] == '.')
        {
            dot++;
            i++;
        }
        if (!is_digit(arg[i]))
            break;
    }
    if (dot == 1 && i == last_char)
        return true;
    else
        return false;
}

bool is_double(std::string const &arg)
{
    int dot = 0;
    int i = 0;
    
    if (arg == "+inf" || arg == "inf" || arg == "-inf" || arg == "nan")
        return true;
    if (arg[i] == '+' || arg[i] == '-')
        i++;
    for (; i < static_cast<int>(arg.size()); i++)
    {
        if (arg[i] == '.')
        {
            dot++;
            i++;
        }
        if (!is_digit(arg[i]))
            return false;
    }
    if (dot == 1)
        return true;
    else
        return false;
}

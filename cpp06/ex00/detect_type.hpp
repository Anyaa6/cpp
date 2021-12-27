/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_type.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:01:49 by ariane            #+#    #+#             */
/*   Updated: 2021/12/27 13:22:33 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECT_TYPE_HPP
#define DETECT_TYPE_HPP

bool is_char(std::string const &arg);
bool is_int(std::string const &arg);
bool is_float(std::string const &arg);
bool is_double(std::string const &arg);

#endif
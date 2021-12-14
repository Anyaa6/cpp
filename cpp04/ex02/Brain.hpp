/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:27:01 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:35:11 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#define NUMBER_OF_IDEAS 100

#include <string>

class Brain 
{
    public :
        Brain();
        Brain(const Brain &to_copy);
        Brain &operator=(const Brain &to_copy);
        ~Brain();
        
        std::string ideas[NUMBER_OF_IDEAS];
};

#endif
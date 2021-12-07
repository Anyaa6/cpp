/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:27:23 by ariane            #+#    #+#             */
/*   Updated: 2021/12/07 17:44:34 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain &to_copy)
{
    for (int i = 0; i < NUMBER_OF_IDEAS; i++)
        ideas[i] = to_copy.ideas[i];
}

Brain & Brain::operator=(const Brain &to_copy)
{
    for (int i = 0; i < NUMBER_OF_IDEAS; i++)
        ideas[i] = to_copy.ideas[i];
    return (*this);
}

Brain::~Brain()
{

}

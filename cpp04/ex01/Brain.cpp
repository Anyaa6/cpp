/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:27:23 by ariane            #+#    #+#             */
/*   Updated: 2021/12/14 11:48:51 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < NUMBER_OF_IDEAS; i++)
        ideas[i] = "basic idea";
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

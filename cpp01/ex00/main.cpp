/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:45:45 by ariane            #+#    #+#             */
/*   Updated: 2021/11/10 11:45:30 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie		*ariane;
	
	ariane = newZombie("ariane");
	Zombie&		ariane_ref = *ariane;

	ariane_ref.announce();
	delete ariane;
	randomChump("pierre");
}
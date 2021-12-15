/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:30:26 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 11:31:35 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &to_copy);
		Ice &operator=(Ice const &to_copy);
		virtual ~Ice();
		
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif
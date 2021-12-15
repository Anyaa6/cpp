/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:30:47 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 11:31:47 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &to_copy);
		Cure &operator=(Cure const &to_copy);
		virtual ~Cure();
		
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:28:28 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 11:47:53 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "Character.hpp"
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string const _type;
		AMateria();
	
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &to_copy);
		AMateria &operator=(AMateria const &to_copy);
		virtual ~AMateria();
		
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
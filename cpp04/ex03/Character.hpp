/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:29:23 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 15:34:19 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define NB_ITEMS_IN_INVENTORY 4
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	protected :
		std::string	_name;
		Character();

	public :
		AMateria 		*inventory[NB_ITEMS_IN_INVENTORY];
		
		Character(std::string name);
		Character(Character const &to_copy);
		Character &operator=(Character const &to_copy);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif

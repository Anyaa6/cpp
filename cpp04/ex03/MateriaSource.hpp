/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:31:11 by abonnel           #+#    #+#             */
/*   Updated: 2021/12/15 12:53:50 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		AMateria *inventory[NB_ITEMS_IN_INVENTORY];
		
		MateriaSource();
		MateriaSource(MateriaSource const &to_copy);
		MateriaSource & operator=(MateriaSource const &to_copy);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif
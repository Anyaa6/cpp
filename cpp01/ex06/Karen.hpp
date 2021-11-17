/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:58:12 by abonnel           #+#    #+#             */
/*   Updated: 2021/11/17 13:45:57 by abonnel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
#include <string>

class		Karen
{
	public :
		void complain( std::string level );
		Karen();
		~Karen();
		void (Karen::*fun_ptr[4])(void);

	private :
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
};

#endif
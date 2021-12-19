/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:33:15 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 11:43:24 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURBBERYCREATIONFORM_HPP
#define SHURBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>

class ShrubberyForm : public Form
{
    public :
        ShrubberyForm(std::string target);
        ShrubberyForm(ShrubberyForm const & to_copy);
        ~ShrubberyForm();

		void execute_current_form () const;
    
    private :
        ShrubberyForm & operator=(ShrubberyForm const & to_copy);
        ShrubberyForm();
};

#endif
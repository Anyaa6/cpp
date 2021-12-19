/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:43:05 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 11:44:02 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>

class PresidentialForm : public Form
{
    public :
        PresidentialForm(std::string target);
        PresidentialForm(PresidentialForm const & to_copy);
        ~PresidentialForm();

		void execute_current_form () const;
    
    private :
        PresidentialForm & operator=(PresidentialForm const & to_copy);
        PresidentialForm();
};

#endif
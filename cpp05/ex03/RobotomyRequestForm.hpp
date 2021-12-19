/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:46:26 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 11:46:51 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>

class RobotomyForm : public Form
{
    public :
        RobotomyForm(std::string target);
        RobotomyForm(RobotomyForm const & to_copy);
        ~RobotomyForm();

		void execute_current_form () const;
    
    private :
        RobotomyForm & operator=(RobotomyForm const & to_copy);
        RobotomyForm();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:37:40 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 12:07:12 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

void PresidentialForm::execute_current_form () const
{
    std::cout << "< " << this->getName() << "> has been forgiven by Zafod Beeblebrox" << std::endl;
}

PresidentialForm::PresidentialForm(std::string target): Form(5, 25, target)
{
}

PresidentialForm::PresidentialForm(PresidentialForm const & to_copy): Form(to_copy.Form::getExecutingGrade(), to_copy.Form::getSigningGrade(), to_copy.Form::getName())
{
}

PresidentialForm::~PresidentialForm()
{
}

//Non accessible
PresidentialForm & PresidentialForm::operator=(PresidentialForm const &to_copy)
{
    (void)to_copy;
    return (*this);
}

PresidentialForm::PresidentialForm(): Form(5, 25, "target")
{
}
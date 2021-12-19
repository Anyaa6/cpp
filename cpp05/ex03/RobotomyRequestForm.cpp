/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:37:07 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 12:17:17 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "RobotomyRequestForm.hpp"

void RobotomyForm::execute_current_form () const
{
    std::cout << "Vzzzzz Vzzzzzzzzzzz, ";
    srand(time(NULL));
    if (rand() % 2 == 0)
        std::cout << "< " << this->getName() << " > has been Robotomized successfully" << std::endl;
    else
        std::cout << "< " << this->getName() << " > robotomy has failed" << std::endl;
}

RobotomyForm::RobotomyForm(std::string target): Form(45, 72, target)
{
}

RobotomyForm::RobotomyForm(RobotomyForm const & to_copy): Form(to_copy.Form::getExecutingGrade(), to_copy.Form::getSigningGrade(), to_copy.Form::getName())
{
}

RobotomyForm::~RobotomyForm()
{
}

//Non accessible
RobotomyForm & RobotomyForm::operator=(RobotomyForm const &to_copy)
{
    (void)to_copy;
    return (*this);
}

RobotomyForm::RobotomyForm(): Form(45, 72, "target")
{
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:36:41 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 12:33:45 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

void ShrubberyForm::execute_current_form () const
{
    std::ofstream   tree((this->getName() + "_shrubbery"), std::fstream::trunc);
    tree << "    _\\/_     \n";
    tree << "     /\\      \n";
    tree << "     /\\      \n";
    tree << "    /  \\     \n";
    tree << "    /~~\\o    \n";
    tree << "   /o   \\    \n";
    tree << "  /~~*~~~\\   \n";
    tree << " o/    o \\   \n";
    tree << " /~~~~~~~~\\~`\n";
    tree << "/__*_______\\ \n";
    tree << "     ||      \n";
    tree << "   \\====/    \n";
    tree << "    \\__/     \n";
}

ShrubberyForm::ShrubberyForm(std::string target): Form(137, 145, target)
{
}

ShrubberyForm::ShrubberyForm(ShrubberyForm const & to_copy): Form(to_copy.Form::getExecutingGrade(), to_copy.Form::getSigningGrade(), to_copy.Form::getName())
{
}

ShrubberyForm::~ShrubberyForm()
{
}

//Non accessible
ShrubberyForm & ShrubberyForm::operator=(ShrubberyForm const &to_copy)
{
    (void)to_copy;
    return (*this);
}

ShrubberyForm::ShrubberyForm(): Form(137, 145, "target")
{
}

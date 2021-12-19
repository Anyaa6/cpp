/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:35:37 by ariane            #+#    #+#             */
/*   Updated: 2021/12/19 12:46:23 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"
/*
Il va imprimer quelque chose comme "Intern creates <form> " sur la sortie standard. Une autre
méthode du type if/elseif/elseif/else, ou autre méthode pas très jolie ne sera pas accepté
en évaluation. Si le Form demandé n’est pas connu, affichez un message d’erreur explicite.*/

class Intern
{
    public :
        Form * makeForm(std::string formName, std::string target);

        Intern();
        ~Intern();
        Intern(Intern const &to_copy);
        Intern & operator=(Intern const &to_copy);
};

#endif //INTERN_HPP
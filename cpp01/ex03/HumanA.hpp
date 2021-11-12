/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:34:24 by ariane            #+#    #+#             */
/*   Updated: 2021/11/10 18:41:07 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
#define HUMAN_A

class HumanA
{
    public:
        HumanA(std::string name, std::string weapon);
        ~HumanA();
        attack();
        
    private:  
        std::string&    _weapon;
        std::string     _name;
};

#endif
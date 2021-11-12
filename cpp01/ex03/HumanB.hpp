/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:34:22 by ariane            #+#    #+#             */
/*   Updated: 2021/11/10 18:41:16 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_B
#define HUMAN_B

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        attack();
        
    private:  
        std::string*    _weapon;
        std::string     _name;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariane <ariane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:31:01 by ariane            #+#    #+#             */
/*   Updated: 2021/11/10 18:35:06 by ariane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class   Weapon
{
    public:
        std::string&    getType() const;
        void            setType(std::string type);
        Weapon();
        ~Weapon();
    
    private:
        std::string     _type;
};
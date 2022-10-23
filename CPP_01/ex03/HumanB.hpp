/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:39:42 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/23 02:20:44 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weap;
        std::string name;
    public:
        HumanB(std::string name);
        void    attack(void);
        void    setWeapon(Weapon &setWep);
};

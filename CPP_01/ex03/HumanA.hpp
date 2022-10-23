/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:39:36 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/23 02:20:56 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon *weap;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon);
        void    attack(void);
};

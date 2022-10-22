/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:39:53 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/22 05:40:25 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        std::string &getType();
        void    setType(std::string new_type);
        Weapon(std::string wep_type);
};

#pragma once

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:39:50 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/20 03:04:45 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(std::string wep_type)
{
    this->type = wep_type;   
}

std::string &Weapon::getType()
{
    std::string &ptr = this->type;
    return ptr;
}

void    Weapon::setType(std::string new_type)
{
    this->type = new_type;
}


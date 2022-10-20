/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:39:39 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/20 04:48:14 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &setWep)
{
    this->weap = &setWep;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:39:34 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/20 04:57:19 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weap = &weapon;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weap->getType() << std::endl;
}
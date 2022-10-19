/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:22:44 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/19 23:42:52 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << this->name << ": destroyed" << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->name << ": Moar_BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string str)
{
    this->name = str;
}
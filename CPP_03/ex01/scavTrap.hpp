/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:10:40 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/07 15:12:08 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class scavTrap : public ClapTrap
{
private:
    std::string Name;
    int Health;
    int Energy;
    int Damage;
public:
    scavTrap(std::string name);
    ~scavTrap();
    scavTrap(const scavTrap &other);
    scavTrap &operator=(const scavTrap &rhs);
    void guardGate();
};
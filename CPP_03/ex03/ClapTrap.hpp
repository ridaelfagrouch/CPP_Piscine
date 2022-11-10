/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:28:18 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/10 15:35:50 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    int Health;
    int Energy;
    int Damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    virtual ~ClapTrap();
    virtual ClapTrap &operator=(const ClapTrap &rhs);
    ClapTrap(const ClapTrap &other);
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    virtual void getHealth();
    virtual void getEnergy();
    virtual void getDamage();
};
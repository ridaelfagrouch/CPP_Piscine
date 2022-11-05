/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:28:18 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/05 11:34:24 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    int Health = 10;
    int Energy = 10;
    int Damage = 0;
public:
    ClapTrap(std::string Name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &rhs);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
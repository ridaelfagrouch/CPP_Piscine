/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:28:21 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/07 19:28:37 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap test("rid");
    
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.attack("target");
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.takeDamage(5);
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.beRepaired(3);
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.takeDamage(5);
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.takeDamage(5);
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.guardGate();
}
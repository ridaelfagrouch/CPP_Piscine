/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:28:21 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/07 13:41:54 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavTrap.hpp"

int main()
{
    scavTrap test1("rid");
    
    test1.getHealth();
    test1.getEnergy();
    test1.getDamage();
    test1.attack("target");
    test1.getHealth();
    test1.getEnergy();
    test1.getDamage();
    test1.takeDamage(5);
    test1.getHealth();
    test1.getEnergy();
    test1.getDamage();
    test1.beRepaired(3);
    test1.getHealth();
    test1.getEnergy();
    test1.getDamage();
    test1.takeDamage(5);
    test1.getHealth();
    test1.getEnergy();
    test1.getDamage();
    test1.takeDamage(5);
    test1.getHealth();
    test1.getEnergy();
    test1.getDamage();
}
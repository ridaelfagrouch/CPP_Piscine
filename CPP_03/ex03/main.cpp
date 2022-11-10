/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:28:21 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/10 15:57:07 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap test("rid");
    
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.attack("ankel");
    test.getHealth();
    test.getEnergy();
    test.getDamage();
    test.whoAmi();
}
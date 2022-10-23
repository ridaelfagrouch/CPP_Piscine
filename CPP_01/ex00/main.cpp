/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:02:46 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/23 01:35:18 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie brain("Foo");
    Zombie *newZ = newZombie("newZombie");

    brain.announce();
    newZ->announce();
    randomChump("randomChump");
    delete(newZ);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:22:37 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/19 23:53:20 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *ptr = zombieHorde(10, "hello");
    delete [] ptr;
}
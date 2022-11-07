/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:22:51 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/07 13:44:54 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *arr;

    arr = new(std::nothrow) Zombie[N];
    if (arr == NULL)
        exit(1);
    for (int i = 0; i < N; i++)
    {
        arr[i].set_name(name);
        arr[i].announce();
    }
    return arr;
}
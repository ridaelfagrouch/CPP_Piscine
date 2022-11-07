/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:06 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/07 15:45:37 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavTrap.hpp"
#include <stdio.h>

int length_(int c[])
{
    return (int)(sizeof(c[])/ sizeof(c[0]));
}

int main()
{
    int c[] = {4, 5, 55, 77};
    printf("%d\n", length_(c));
}
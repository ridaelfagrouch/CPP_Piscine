/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:22:48 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/22 05:40:43 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    void    announce( void );
    void    set_name(std::string str);
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

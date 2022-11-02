/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:03:01 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/30 15:14:02 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Zombie
{
    private:
        std::string name;
    public:
        void    announce( void );
        Zombie(std::string str);
        ~Zombie(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
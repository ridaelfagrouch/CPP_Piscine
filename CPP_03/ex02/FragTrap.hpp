/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:03:16 by garra             #+#    #+#             */
/*   Updated: 2022/11/07 19:07:17 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &rhs);
    void highFivesGuys(void);
    void attack(const std::string& target);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:01:06 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/10 15:54:51 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
   std::cout << "ScavTrap Default constructor called" << std::endl;
   this->Name = "no_name";
   this->Health = 100;
   this->Energy = 50;
   this->Damage =  20;
}

ScavTrap::ScavTrap(std::string name)
{
   std::cout << "ScavTrap constructors with parameters called" << std::endl;
   this->Name = name;
   this->Health = 100;
   this->Energy = 50;
   this->Damage =  20;
}

ScavTrap::~ScavTrap(){
   std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
   *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs){
   if (this != &rhs)
   {
      this->Name = rhs.Name;
      this->Health = rhs.Health;
      this->Energy = rhs.Energy;
      this->Damage = rhs.Damage;
   }
   return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->Energy > 0 || this->Health > 0)
      this->Energy--;
   std::cout << "ScavTrap " << Name << " attacks " << target << " causing " \
      << Damage << " point of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mmode" << std::endl;
}

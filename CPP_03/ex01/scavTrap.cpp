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

scavTrap::scavTrap(std::string name) : ClapTrap(name){
   std::cout << "scavTrap Default constructor called" << std::endl;
   this->Health = 100;
   this->Energy = 50;
   this->Damage =  20;
}

scavTrap::~scavTrap(){
   std::cout << "scavTrap Destructor called" << std::endl;
}

scavTrap::scavTrap(const scavTrap &other):ClapTrap(other.Name){
   *this = other;
}

scavTrap &scavTrap::operator=(const scavTrap &rhs){
   if (this != &rhs)
   {
      this->Name = rhs.Name;
      this->Health = rhs.Health;
      this->Energy = rhs.Energy;
      this->Damage = rhs.Damage;
   }
   return *this;
}

void	scavTrap::attack(const std::string& target)
{
	if (this->Energy > 0 || this->Health > 0)
      this->Energy--;
   std::cout << "scavTrap " << Name << " attacks " << target << " causing " \
      << Damage << " point of damage!" << std::endl;
}

void    scavTrap::guardGate()
{
    std::cout << "scavTrapp " << this->Name << " is now in Gate keeper mmode" << std::endl;
}
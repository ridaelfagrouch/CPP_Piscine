/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:31:54 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/10 16:06:44 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
   std::cout << "DiamondTrap Default constructor called" << std::endl;
   this->Name = "no_name";
   ClapTrap::Name = this->Name + "_clap_name";
   this->Health = 100;
   this->Energy = 50;
   this->Damage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
{
   std::cout << "DiamondTrap constructors with parameters called" << std::endl;
   ClapTrap::Name = name + "_clap_name";
   this->Name = name;
   this->Health = 100;
   this->Energy = 50;
   this->Damage = 30;
}

DiamondTrap::~DiamondTrap(){
   std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
   *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
   if (this != &rhs)
   {
      this->Name = rhs.Name;
      this->Health = rhs.Health;
      this->Energy = rhs.Energy;
      this->Damage = rhs.Damage;
   }
   return *this;
}

void DiamondTrap::whoAmi()
{
   std::cout << "DiamondTrap name : " << this->Name << " | " << " ClapTrap name : " << ClapTrap::Name << std::endl; 
}

void DiamondTrap::getHealth()
{
   if (this->Health > 0)
      std::cout << this->Name << "'s Health : " << Health << std::endl;
}

void DiamondTrap::getEnergy()
{
   if (this->Health > 0)
      std::cout << this->Name << "'s Energy " << Energy << std::endl;
}

void DiamondTrap::getDamage()
{
   if (this->Health > 0)
      std::cout << this->Name << "'s Damage : " << Damage << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	if (this->Energy > 0 || this->Health > 0)
      this->Energy--;
   std::cout << "ScavTrap " << Name << " attacks " << target << " causing " \
      << Damage << " point of damage!" << std::endl;
}
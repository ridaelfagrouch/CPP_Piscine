/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:28:15 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/10 15:06:20 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ClapTrap.hpp"

ClapTrap::ClapTrap(){
   std::cout << "ClapTrap Default constructor called" << std::endl;
   this->Name = "no_name";
   this->Health = 10;
   this->Energy = 10;
   this->Damage =  0;
}

ClapTrap::ClapTrap(std::string name){
   std::cout << "ClapTrap constructors with parameters called" << std::endl;
   this->Name = name;
   this->Health = 10;
   this->Energy = 10;
   this->Damage =  0;
}

ClapTrap::~ClapTrap(){
   std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
   *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs){
   if (this != &rhs)
   {
      this->Name = rhs.Name;
      this->Health = rhs.Health;
      this->Energy = rhs.Energy;
      this->Damage = rhs.Damage;
   }
   return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Energy > 0 || this->Health > 0)
      this->Energy--;
   std::cout << "ClapTrap " << Name << " attacks " << target << " causing " \
      << Damage << " point of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->Health -= amount;
	this->Health <= 0 ? std::cout << "clapTrap is dead" << std::endl : std::cout << "clapTrap " << this->Name \
      << " has taken " << amount << " of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy <= 0 || this->Health <= 0)
		return ;
   this->Health += amount;
	this->Energy--;
	std::cout << "clapTrap " << this->Name << " repaired with this amount " << amount << std::endl;
}

void ClapTrap::getHealth()
{
   if (this->Health > 0)
      std::cout << this->Name << "'s Health : " << Health << std::endl;
}

void ClapTrap::getEnergy()
{
   if (this->Health > 0)
      std::cout << this->Name << "'s Energy " << Energy << std::endl;
}

void ClapTrap::getDamage()
{
   if (this->Health > 0)
      std::cout << this->Name << "'s Damage : " << Damage << std::endl;
}
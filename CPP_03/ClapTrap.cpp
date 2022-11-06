/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:28:15 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/05 11:28:33 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
   this.Name = name;
}

ClapTrap::~ClapTrap(){}

ClapTrap::ClapTrap(const ClapTrap &other){
   *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs){
   if (this != &rhs)
   {
      this.Name = rhs.Name;
      this.Health = rhs.Health;
      this.Energy = rhs.Energy;
      this.Damage = rhs.Damage;
   }
   return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	(this->Energy > 0 || this->Health > 0) ? this->Energy-- : return;
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


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:03:10 by garra             #+#    #+#             */
/*   Updated: 2022/11/07 19:15:11 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
   std::cout << "FragTrap Default constructor called" << std::endl;
   this->Health = 100;
   this->Energy = 100;
   this->Damage =  30;
}

FragTrap::~FragTrap(){
   std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other):ClapTrap(other.Name){
   *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs){
   if (this != &rhs)
   {
      this->Name = rhs.Name;
      this->Health = rhs.Health;
      this->Energy = rhs.Energy;
      this->Damage = rhs.Damage;
   }
   return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->Energy > 0 || this->Health > 0)
      this->Energy--;
   std::cout << "FragTrap " << Name << " attacks " << target << " causing " \
      << Damage << " point of damage!" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "🙏" << std::endl;
}
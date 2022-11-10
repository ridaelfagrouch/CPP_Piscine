/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:03:10 by garra             #+#    #+#             */
/*   Updated: 2022/11/10 15:39:06 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
   std::cout << "FragTrap Default constructor called" << std::endl;
   this->Name = "no_name";
   this->Health = 100;
   this->Energy = 100;
   this->Damage =  30;
}

FragTrap::FragTrap(std::string name){
   std::cout << "FragTrap constructors with parameters called" << std::endl;
   this->Name = name;
   this->Health = 100;
   this->Energy = 100;
   this->Damage =  30;
}

FragTrap::~FragTrap(){
   std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
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

void    FragTrap::highFivesGuys(void)
{
    std::cout << "🙏" << std::endl;
}
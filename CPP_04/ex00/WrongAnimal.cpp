/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:57:12 by garra             #+#    #+#             */
/*   Updated: 2022/11/11 18:01:19 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
   std::cout << "WrongAnimal Default constructor called" << std::endl;
   this->type = "no_type";
}

WrongAnimal::WrongAnimal(std::string type){
   std::cout << "WrongAnimal constructors with parameters called" << std::endl;
   this->type = type;
}

WrongAnimal::~WrongAnimal(){
   std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
   *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs){
   if (this != &rhs)
      *this = rhs;
   return *this;
}

void WrongAnimal::makeSound() const
{
   std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
   return type;
}
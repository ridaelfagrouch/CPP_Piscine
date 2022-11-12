/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:16:11 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/12 11:50:47 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Animal.hpp"

Animal::Animal(){
   std::cout << "Animal Default constructor called" << std::endl;
   this->type = "no_type";
}

Animal::Animal(std::string type){
   std::cout << "Animal constructors with parameters called" << std::endl;
   this->type = type;
}

Animal::~Animal(){
   std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
   *this = other;
}

Animal &Animal::operator=(const Animal &rhs){
   if (this != &rhs)
      *this = rhs;
   return *this;
}

std::string Animal::getType() const
{
   return type;
}
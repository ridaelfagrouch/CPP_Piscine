/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:19:17 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/11 17:53:20 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Dog.hpp"

Dog::Dog()
{
   std::cout << "Dog Default constructor called" << std::endl;
   this->type = "Dog";
}

Dog::~Dog(){
   std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal("Dog")
{
   *this = other;
}

Dog &Dog::operator=(const Dog &rhs)
{
   if (this != &rhs)
      *this = rhs;
   return *this;
}

void Dog::makeSound() const
{
   std::cout << "Dog sound" << std::endl;
}
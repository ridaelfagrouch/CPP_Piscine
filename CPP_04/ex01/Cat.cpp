/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:19:10 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/11 17:53:28 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Cat.hpp"

Cat::Cat()
{
   std::cout << "Cat Default constructor called" << std::endl;
   this->type = "Cat";
}
Cat::~Cat(){
   std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal("Cat")
{
   *this = other;
}

Cat &Cat::operator=(const Cat &rhs){
   if (this != &rhs)
      *this = rhs;
   return *this;
}

void Cat::makeSound() const
{
   std::cout << "Cat sound" << std::endl;
}
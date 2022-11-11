/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:57:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/11 18:05:08 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "WrongCat.hpp"

WrongCat::WrongCat()
{
   std::cout << "WrongCat Default constructor called" << std::endl;
   this->type = "WrongCat";
}
WrongCat::~WrongCat(){
   std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal("WrongCat")
{
   *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs){
   if (this != &rhs)
      *this = rhs;
   return *this;
}

void WrongCat::makeSound() const
{
   std::cout << "WrongCat sound" << std::endl;
}
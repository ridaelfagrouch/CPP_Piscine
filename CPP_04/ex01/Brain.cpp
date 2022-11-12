/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:52:11 by garra             #+#    #+#             */
/*   Updated: 2022/11/12 10:55:13 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Brain.hpp"

Brain::Brain()
{
   std::cout << "Brain Default constructor called" << std::endl;
}
Brain::~Brain(){
   std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
   *this = other;
}

Brain &Brain::operator=(const Brain &rhs){
   if (this != &rhs)
      *this = rhs;
   return *this;
}
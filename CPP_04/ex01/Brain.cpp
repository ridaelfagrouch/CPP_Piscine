/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:52:11 by garra             #+#    #+#             */
/*   Updated: 2022/11/13 10:34:13 by rel-fagr         ###   ########.fr       */
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
   for (int i = 0; i < 100; i++)
      this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(const Brain &rhs){
   if (this != &rhs)
      for (int i = 0; i < 100; i++)
         this->ideas[i] = rhs.ideas[i];
   return *this;
}
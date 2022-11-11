/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:16:11 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/11 14:16:37 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Animal.hpp"

Animal::Animal(){}

Animal::~Animal(){}

Animal::Animal(const Animal &other){}

Animal &Animal::operator=(const Animal &rhs){
   if (this != &rhs){}
   return *this;
}
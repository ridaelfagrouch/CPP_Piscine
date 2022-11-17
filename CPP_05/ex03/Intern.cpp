/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:28:06 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 15:21:24 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &other){}

Intern &Intern::operator=(const Intern &rhs){
   if (this != &rhs){}
   return *this;
}

Form  *Intern::makeForm(std::string name, std::string target)
{
   Form form();
   std::cout << "Intern creates " << name << std::endl;
}
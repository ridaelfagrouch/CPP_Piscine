/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:49 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 00:26:46 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
   this->Target = "no_target";
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardon", 25, 5)
{
   *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs){
   if (this != &rhs)
   {
      this->Target = rhs.Target;
   }
   return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
   if (this->getGradeExec() < executor.getGrade())
      throw Form::gradeTooLowException_;
   std::cout << Target << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:49 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 11:58:56 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
   this->Target = "no_target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardon", 25, 5)
{
   this->Target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardon", 25, 5)
{
   *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs){
   if (this != &rhs)
      this->Target = rhs.Target;
   return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
   if (this->getGradeExec() < executor.getGrade())
      throw Form::gradeTooLowException_;
   if (this->getSign() == false)
      throw Form::gradeTooCheckFormSigned;
   std::cout << Target << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}


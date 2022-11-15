/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:54 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 00:35:14 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45)
{
   this->Target = "no_target";
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("PresidentialPardon", 25, 5)
{
   *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs){
   if (this != &rhs)
      this->Target = rhs.Target;
   return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
   if (this->getGradeExec() < executor.getGrade())
      throw Form::gradeTooLowException_;
   std::cout << "Drilling Noise !!" << std::endl;
}

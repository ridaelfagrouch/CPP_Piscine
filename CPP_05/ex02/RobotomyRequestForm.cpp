/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:54 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 12:10:09 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45)
{
   this->Target = "no_target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequest", 72, 45)
{
   this->Target = target;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequest", 72, 45)
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
   if (this->getSign() == false)
      throw Form::gradeTooCheckFormSigned;
   
   std::cout << "Drilling Noise !!" << std::endl;
   srand((unsigned) time(NULL));
   int random = (rand() % 101);
   if (random % 2)
      std::cout << this->Target << " has been robotomized successfully 50\% of the time " << std::endl;
   else
      std::cout << " the robotomy failed." << std::endl;
      
}

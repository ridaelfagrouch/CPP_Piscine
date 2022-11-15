/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:18:01 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 00:48:00 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
   this->Target = "no_target";
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("PresidentialPardon", 25, 5)
{
   *this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs){
   if (this != &rhs)
      this->Target = rhs.Target;
   return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
   if (this->getGradeExec() < executor.getGrade())
      throw Form::gradeTooLowException_;
}
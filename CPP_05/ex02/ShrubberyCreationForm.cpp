/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:18:01 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/16 12:17:17 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
   this->Target = "no_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreation", 145, 137)
{
   this->Target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("ShrubberyCreation", 145, 137)
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
   std::string fileName = this->Target;
   std::fstream file;

   if (this->getGradeExec() < executor.getGrade())
      throw Form::gradeTooLowException_;
   if (this->getSign() == false)
      throw Form::gradeTooCheckFormSigned;
   
   fileName.append("_shrubbery");
   file.open(fileName, std::fstream::out | std::fstream::trunc);
   std::string tree = "   oxoxoo    ooxoo \n\
  ooxoxo oo  oxoxooo \n\
 oooo xxoxoo ooo ooox \n\
 oxo o oxoxo  xoxxoxo \n\
  oxo xooxoooo o ooo  \n\
    ooo\\oo\\  /o/o \n\
        \\  \\/ / \n\
         |   / \n\
         |  | \n\
         | D| \n\
         |  | \n\
         |  | \n\
  ______/____\\____ \n\
    shrubbery tree\n";
   
   file << tree << std::endl << tree << std::endl << tree << std::endl;
   file.close();
}
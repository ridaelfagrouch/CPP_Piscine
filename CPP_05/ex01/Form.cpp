/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:31:19 by garra             #+#    #+#             */
/*   Updated: 2022/11/15 14:43:46 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : Name("no_name"), GradeSign(150), GradeExec(150)
{
    Sign = false;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : Name(name) , GradeSign(gradeSign) , GradeExec(gradeExec)
{
    if (getGradeSign() > 150 || getGradeExec() > 150)
        throw gradeTooLowException_;
    if (getGradeSign() < 1 || getGradeExec() < 1)
        throw gradeTooHighException_;
    this->Sign = false;
}

Form::Form(const Form &other) : Name(other.Name), GradeSign(other.GradeSign), GradeExec(other.GradeExec)
{
    *this = other;
}

Form::~Form(){}

Form   &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return *this;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > getGradeSign())
        throw gradeTooLowException_;
    if (bureaucrat.getGrade() < 1)
        throw gradeTooHighException_;
    else
        this->Sign = true;
}

std::string Form::getName()
{
    return (this->Name);
}

bool		Form::getSign()
{
    return (this->Sign);
}

int	Form::getGradeSign()
{
    return(this->GradeSign);
}

int	Form::getGradeExec()
{
    return(this->GradeExec);
}

std::ostream& operator<< (std::ostream& out, Form &form)
{
    out << "| Name of the form : " << form.getName() << " | form status : " << form.getSign() << " | grade to sign it : " << \
        form.getGradeSign() << " | grade to Exec it : " << form.getGradeExec() << " |" << std::endl;
	return out;
}
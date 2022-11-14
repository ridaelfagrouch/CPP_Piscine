/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:31:19 by garra             #+#    #+#             */
/*   Updated: 2022/11/14 21:10:39 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("no_name"), GradeSign(150), GradeExec(150)
{
    Sign = false;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : Name(name) , GradeSign(gradeSign) , GradeExec(gradeExec)
{
    if (getGradeSign() > 150 || getGradeExec() > 150)
        throw GradeTooLowException();
    if (getGradeSign() < 1 || getGradeExec() < 1)
        throw GradeTooHighException();
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
        throw GradeTooLowException();
    if (bureaucrat.getGrade() < 1)
        throw GradeTooHighException();
    else
        this->Sign = true;
}

const char* GradeTooHighException::what() const throw()
{
	return ("grade too High");
}

const char* GradeTooLowException::what() const throw()
{
	return ("grade too Low"); 
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
    out << "Name of the form " << form.getName() << " and form status " << form.getSign() << " and the grade to sign it " << form.getGradeSign() << " and the grade to sign it " << form.getGradeExec();
	return out;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:41:34 by garra             #+#    #+#             */
/*   Updated: 2022/11/15 14:32:32 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
    this->Grade = grade;
	if (Grade > 150)
		throw gradeTooLowException;
	else if (Grade <= 0)
		throw gradeTooHighException;
}

Bureaucrat::Bureaucrat() : Name("no_name")
{
	this->Grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat  &Bureaucrat::operator= (const Bureaucrat &rhs)
{
	if (this != &rhs)
		*this = rhs;
    return *this;
}

Bureaucrat::~Bureaucrat(){}


std::string    Bureaucrat::getName(void)
{
    return (this->Name);
}

int     Bureaucrat::getGrade(void)
{
    return (this->Grade);
}

void    Bureaucrat::decrementGrade(void)
{
	int check = getGrade() - 1;

	if (check > 150)
		throw gradeTooLowException;
	else if (check <= 0)
		throw gradeTooHighException;
    this->Grade--;
}

void    Bureaucrat::incrementGrade(void)
{
	int check = getGrade() + 1;

	if (check > 150)
		throw gradeTooLowException;
	else if (check <= 0)
		throw gradeTooHighException;
    this->Grade++;
}

std::ostream& operator<< (std::ostream& out, Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
    {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
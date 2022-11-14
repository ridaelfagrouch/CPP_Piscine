/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:31:16 by garra             #+#    #+#             */
/*   Updated: 2022/11/14 21:02:30 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class GradeTooHighException : public std::exception
{
    public:
	    virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception
{
    public:
	    virtual const char* what() const throw();
};

class Form
{
private:
    const std::string Name;
    bool Sign;
    const int GradeSign;
    const int GradeExec;
public:
    Form();
    Form(std::string name, int gradeSign, int gradeExec);
    ~Form();
    Form(const Form &other);
    Form    &operator=(const Form &rhs);
    std::string getName();
    int getGradeSign();
    int getGradeExec();
    bool	getSign();
    void	beSigned(Bureaucrat &bureaucrat);
    GradeTooHighException	gradeTooHighException;
    GradeTooLowException    gradeTooLowException;
};

std::ostream& operator<< (std::ostream& out, Form &form);
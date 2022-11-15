/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:08:44 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/14 13:24:54 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
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
    bool bol;
    const int Grade_sign; 
    const int Grade_execute; 
public:
    Form();
    ~Form();
    Form(const Form &other);
    Form &operator=(const Form &rhs);
    GradeTooHighException	gradeTooHighException;
    GradeTooLowException    gradeTooLowException;
    const std::string    getName(void);
    const int     getGrade(void);
    void    beSigned(Bureaucrat Bureaucrat); 
};

std::ostream& operator<< (std::ostream& out, Form &form);
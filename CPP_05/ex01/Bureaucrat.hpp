/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:33:51 by garra             #+#    #+#             */
/*   Updated: 2022/11/14 20:48:13 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"

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


class Bureaucrat
{
    private:
        const std::string	Name;
        int					Grade;
    public:
        Bureaucrat();
		Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat();
        Bureaucrat    &operator=(const Bureaucrat &rhs);
        std::string    getName(void);
        int     getGrade(void);
        GradeTooHighException	gradeTooHighException;
        GradeTooLowException    gradeTooLowException;
        void    incrementGrade(void);
        void    decrementGrade(void);
        void	signForm(Form &form);
};


std::ostream& operator<< (std::ostream& out, Bureaucrat &bureaucrat);

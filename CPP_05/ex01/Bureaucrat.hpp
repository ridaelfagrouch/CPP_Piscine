/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:33:51 by garra             #+#    #+#             */
/*   Updated: 2022/11/14 11:11:05 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

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
};


std::ostream& operator<< (std::ostream& out, Bureaucrat &bureaucrat);

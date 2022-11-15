/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:33:51 by garra             #+#    #+#             */
/*   Updated: 2022/11/15 18:53:09 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Form;

class GradeTooHighException : public std::exception
{
    public:
	    virtual const char* what() const throw(){
            return ("grade too High");
        }
};

class GradeTooLowException : public std::exception
{
    public:
	    virtual const char* what() const throw(){
            return ("grade too Low");
        }
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
        void    incrementGrade(void);
        void    decrementGrade(void);
        void	signForm(Form &form);
        void executeForm(Form const & form);
        GradeTooHighException	gradeTooHighException;
        GradeTooLowException    gradeTooLowException;
};



std::ostream& operator<< (std::ostream& out, Bureaucrat &bureaucrat);

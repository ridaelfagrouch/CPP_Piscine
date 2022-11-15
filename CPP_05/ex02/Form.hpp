/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:31:16 by garra             #+#    #+#             */
/*   Updated: 2022/11/16 00:22:52 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>


class Bureaucrat;

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
    int getGradeExec() const;
    bool	getSign();
    void	beSigned(Bureaucrat &bureaucrat);
    virtual void execute(Bureaucrat const & executor) const = 0;
    GradeTooHighException	gradeTooHighException_;
    GradeTooLowException    gradeTooLowException_;
};

std::ostream& operator<< (std::ostream& out, Form &form);
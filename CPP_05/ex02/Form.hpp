/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:31:16 by garra             #+#    #+#             */
/*   Updated: 2022/11/15 18:53:46 by rel-fagr         ###   ########.fr       */
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
    int getGradeExec();
    bool	getSign();
    void	beSigned(Bureaucrat &bureaucrat);
    const void execute(Bureaucrat const & executor);
    GradeTooHighException	gradeTooHighException_;
    GradeTooLowException    gradeTooLowException_;
};

std::ostream& operator<< (std::ostream& out, Form &form);
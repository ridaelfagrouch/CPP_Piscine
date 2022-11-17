/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/17 15:11:17 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern Create_form;
        Bureaucrat rid("rida", 4);
        Form *form = Create_form.makeForm("PresidentialPardonForm", "trump");
        // Form *form = Create_form.makeForm("RobotomyRequestForm", "trump");
        // Form *form = Create_form.makeForm("ShrubberyCreationForm", "trump");
        if (form != NULL)
        {
            form->beSigned(rid);
            form->execute(rid);
        }
        delete form;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}
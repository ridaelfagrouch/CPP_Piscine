/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/18 13:12:05 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
// #include <stdlib.h>

void excep() 
{
    Form *form;

    try
    {
        Intern Create_form;
        Bureaucrat rid("rida", 20);
        form = Create_form.makeForm("PresidentialPardonForm", "trump");
        // form = Create_form.makeForm("RobotomyRequestForm", "trump");
        // form = Create_form.makeForm("ShrubberyCreationForm", "trump");
        if (form != NULL)
        {
                form->beSigned(rid);
                form->execute(rid);
        }
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    delete form;
}

int main()
{
    excep();
    // system("leaks At_least_this_beats_coffee-making");
}
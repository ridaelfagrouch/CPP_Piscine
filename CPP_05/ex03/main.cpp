/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/17 19:29:31 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <stdlib.h>

void excep() {
     try
    {
        Intern Create_form;
        Bureaucrat rid("rida", 20);
        Form *form = Create_form.makeForm("PresidentialPardonForm", "trump");
        // Form *form = Create_form.makeForm("RobotomyRequestForm", "trump");
        // Form *form = Create_form.makeForm("ShrubberyCreationForm", "trump");
        if (form != NULL)
        {
            try
            {
                form->beSigned(rid);
                form->execute(rid); 
            }
            catch(std::exception& e)
            {
                delete form;
                std::cout << e.what() << '\n';
            }
        }
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

int main()
{
    excep();
    system("leaks At_least_this_beats_coffee-making");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/16 13:17:57 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include  "RobotomyRequestForm.hpp"
#include  "ShrubberyCreationForm.hpp"
#include  "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat rid("rida", 4);
        // PresidentialPardonForm Presiden("trump");
        // ShrubberyCreationForm Shrubbery("trump");
        RobotomyRequestForm Robotomy("trump");
        // Presiden.beSigned(rid);
        // Presiden.execute(rid);
        // Shrubbery.beSigned(rid);
        // Shrubbery.execute(rid);
        Robotomy.beSigned(rid);
        Robotomy.execute(rid);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}
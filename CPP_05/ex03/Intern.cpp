/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:24:35 by garra             #+#    #+#             */
/*   Updated: 2022/11/17 18:05:26 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void){}

Intern::Intern(Intern const & other)
{
	*this = other;
}

Intern &Intern::operator=(Intern const & rhs)
{
	if (this != &rhs)
        *this = rhs;
    return *this;
}

Intern::~Intern(void){}

Form *Intern::makeForm(std::string name, std::string target)
{
    int	form_id = -1;
	Form * form = NULL;
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			form_id = i;
			break;
		}
	}
	switch (form_id)
	{
	case 0:
		form = new ShrubberyCreationForm(target);
		std::cout << "Intern creates ShrubberyCreationForm\n";
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		std::cout << "Intern creates RobotomyRequestForm\n";
		break;
	case 2:
		form = new PresidentialPardonForm(target);
		std::cout << "Intern creates PresidentialPardonForm\n";
		break;
	default:
		std::cout << "Intern creates nothing!\n";
		break;
	}
	return (form);
}
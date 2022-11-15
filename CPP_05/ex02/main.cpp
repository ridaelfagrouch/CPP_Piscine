/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/15 15:04:23 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat rid("rida", 99);
        // Bureaucrat rid("rida", 150);
        // Bureaucrat rid("rida", 0);
        Form dada("form_name", 100, 120);
        rid.incrementGrade();
        dada.beSigned(rid);
        rid.signForm(dada);
        std::cout << rid << std::endl;
        std::cout << dada << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}
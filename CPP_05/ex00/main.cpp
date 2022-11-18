/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/18 13:16:39 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat rid("rida", 149);
        rid.incrementGrade();
        std::cout << rid << std::endl;

        Bureaucrat ahmed("ahmed", 2);
        ahmed.decrementGrade();
        std::cout << ahmed << std::endl;

        Bureaucrat karim("karim", 160);
        karim.incrementGrade();
        std::cout << karim << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}
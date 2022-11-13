/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:07:25 by garra             #+#    #+#             */
/*   Updated: 2022/11/13 23:36:39 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat rid("rida", 150);
    std::cout << rid.getGrade() << std::endl;

    try
    {
        rid.decrementGrade();
        std::cout << rid << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}
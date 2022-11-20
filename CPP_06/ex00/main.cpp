/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:44 by garra             #+#    #+#             */
/*   Updated: 2022/11/20 18:47:48 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casts.hpp"

int main(int ac, char **av)
{
    std::string str = "error: invalidArg";
    try
    {
        if (ac > 2 || ac == 1)
            throw str;
        Casts obj(av[1]);
        obj.castChar();
        obj.castInt();
        obj.castFloat();
        obj.castDouble();
    }
    catch(std::string str)
    {
        std::cout << str << '\n';
    }
}
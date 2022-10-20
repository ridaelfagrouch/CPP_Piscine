/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:02:05 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/20 05:41:37 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void file_manipulate(char **av)
{
    std::string line;
    std::ifstream file(av[1]);
    if (!file) std::cout << "Can't open input file!" << std::endl;
    while (!std::getline(file, line).eof())
    {
        std::cout << line << std::endl;
        line.find(av[2]);
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
        file_manipulate(av);
    else
        std::cout << "error incompatible arg!!" << std::endl;
}
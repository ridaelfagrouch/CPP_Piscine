/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 05:02:05 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/22 02:37:00 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void file_manipulate(char **av)
{
    std::string line;
    std::string strFind = av[2];
    std::string strReplace = av[3];
    std::string appendLine;
    std::string freplace = "";
    std::fstream file;
    size_t i = 0;
    size_t pos;
    
    if (strFind.empty()) std::exit(EXIT_FAILURE);
    file.open(av[1], std::fstream::in);
    if (!file.is_open()) std::cout << "Can't open input file!" << std::endl , std::exit(EXIT_FAILURE);
    while (!std::getline(file, line).eof())
        appendLine.append(line).append("\n");
        
    while (1)
    {
        pos = appendLine.find(strFind, i);
        if (pos == (size_t) -1) break;
        appendLine.insert(pos, strReplace);
        i = pos + strReplace.length();
        appendLine.erase(i, strFind.length());
    }
    file.close();
    freplace.append(av[1]).append(".replace");
    file.open(freplace, std::fstream::out | std::fstream::trunc);
    file << appendLine << std::endl;
    file.close();
}

int main(int ac, char **av)
{
    if (ac == 4)
        file_manipulate(av);
    else
        std::cout << "error incompatible arg!!" << std::endl;
}

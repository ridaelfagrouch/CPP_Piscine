/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:17:32 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/13 02:16:05 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

void    PrintEntre()
{
    std::cout << "Enter your command :" << std::endl << \
        "\t ADD " << std::endl << "\t SEARCH" << \
        std::endl << "\t EXIT" << std::endl;
}

int main()
{
    std::string str;
    
    PrintEntre();
    while (!std::cin.eof())
    {
        std::getline(std::cin, str);
        if (str == "ADD")
        else if (str == "SEARCH")
        else if (str == "EXIT")
            break ;
        else
            std::cout << "invalid command!!" << std::endl;
    }
}
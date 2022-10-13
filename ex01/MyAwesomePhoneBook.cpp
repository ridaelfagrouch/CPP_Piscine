/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:17:32 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/13 16:43:44 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    PrintEntre()
{
    std::cout << "Enter your command :" << std::endl << \
        "\t >> \"ADD\" " << std::endl << "\t >> \"SEARCH\"" << \
        std::endl << "\t >> \"EXIT\"" << std::endl;
}

int main()
{
    PhoneBook   phone;
    std::string str;
    int         index;
    
    PrintEntre();
    index = 0;
    while (!std::cin.eof())
    {
        std::getline(std::cin, str);
        if (str == "ADD")
            phone.creat_contact(index);
        // else if (str == "SEARCH")
        //     phone.search_contact(index);
        // else if (str == "EXIT")
        //     break ;
        // else
        //     std::cout << "invalid command!!" << std::endl;
    }
}
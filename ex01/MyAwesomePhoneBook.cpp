/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:17:32 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/14 05:36:59 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    PrintEntre()
{
    std::cout << "Enter your command :" << std::endl << \
        "\t >> \"ADD\" " << std::endl << "\t >> \"SEARCH\"" << \
        std::endl << "\t >> \"EXIT\"" << std::endl;
}

/*----------------------------------------------------------------------------*/

int main()
{
    PhoneBook   phone;
    std::string str;
    int         index;
    int         count;
    
    PrintEntre();
    index = 0;
    count = -1;
    while (!std::cin.eof())
    {
        std::getline(std::cin, str);
        if(std::cin.eof())
            break ;
        if (str == "ADD")
            phone.creat_contact(&index, &count);
        else if (str == "SEARCH")
        {
            phone.search_contact(count);
            phone.print_contact(phone, count);
        }
        else if (str == "EXIT")
            break ;
        else
            std::cout << "\033[1;31minvalid command!!\033[0m" << std::endl;
        PrintEntre();
    }
}
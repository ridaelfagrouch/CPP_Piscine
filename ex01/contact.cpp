/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:12:51 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/14 05:48:26 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

/*----------------------------------------------------------------------------*/

std::string	print_field(std::string ptr)
{
	std::string str;
    do
    {
        std::cout << ptr ;
        std::getline(std::cin, str);
        if (std::cin.eof())
            exit(1);
    }while (str.empty() && std::cout << "\033[1;31mempty field!!\033[0m" << std::endl);
	return (str);
}

/*----------------------------------------------------------------------------*/

 void    Contact::set_info(void)
{
    this->FirstName = print_field("FirstName: ");
    this->LastName = print_field("LastName: ");
    this->NickName = print_field("NickName: ");
    this->PhoneNumber = print_field("PhoneNumber: ");
    this->DarkestSecret = print_field("DarkestSecret: ");
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_FirstName(void)
{
    return this->FirstName;
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_LastName(void)
{
    return this->LastName;
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_NickName(void)
{
    return this->NickName;
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_PhoneNumber(void)
{
    return this->PhoneNumber;
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_DarkestSecret(void)
{
    return this->DarkestSecret;
}
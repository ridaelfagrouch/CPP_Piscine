/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:12:51 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/14 03:29:39 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

/*----------------------------------------------------------------------------*/

 void    Contact::set_info(void)
{
    std::cout << "FirstName: " ;
    std::getline(std::cin, this->FirstName);
    std::cout << "LastName: ";
    std::getline(std::cin, this->LastName);
    std::cout << "NickName: ";
    std::getline(std::cin, this->NickName);
    std::cout << "PhoneNumber: ";
    std::getline(std::cin, this->PhoneNumber);
    std::cout << "DarkestSecret: ";
    std::getline(std::cin, this->DarkestSecret);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:12:51 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/14 01:31:26 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

/*----------------------------------------------------------------------------*/

 void    Contact::set_info(void)
{
    std::cout << "firstName: " ;
    std::getline(std::cin, this->firstName);
    std::cout << "lastName: ";
    std::getline(std::cin, this->lastName);
    std::cout << "nickName: ";
    std::getline(std::cin, this->nickName);
    std::cout << "phoneNumber: ";
    std::getline(std::cin, this->phoneNumber);
    std::cout << "darkestSecret: ";
    std::getline(std::cin, this->darkestSecret);
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_firstname(void)
{
    return this->firstName;
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_lastname(void)
{
    return this->lastName;  
}

/*----------------------------------------------------------------------------*/

std::string Contact::get_nickname(void)
{
    return this->nickName;    
}
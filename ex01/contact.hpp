/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:32:16 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/13 16:37:46 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT__HPP

# include <string>
# include <iostream>

class    Contact
{
    private:
        std::string     firstName;
        std::string     lastName;
        std::string     nickName;
        std::string     phoneNumber;
        std::string     darkestSecret;
    public:
        void    set_info(void)
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
        };
};

#endif
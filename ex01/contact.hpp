/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:32:16 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/12 20:58:58 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT__HPP

# include <string>
# include <iostream>

const int MAX_CONTACTS = 8;
const int WITDTH = 10;

class    Contact
{

    private:
        std::string     firstName;
        std::string     lastName;
        std::string     nickname;
        std::string     phoneNumber;
        std::string     darkestSecret;
};

#endif
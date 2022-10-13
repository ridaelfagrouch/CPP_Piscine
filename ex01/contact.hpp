/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:32:16 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/13 23:06:43 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
        void    set_info(void);
        std::string get_firstname(void);
        std::string get_lastname(void);
        std::string get_nickname(void);
};

#endif
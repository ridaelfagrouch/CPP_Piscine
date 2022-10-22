/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:32:16 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/22 05:41:40 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class    Contact
{
    private:
        std::string     FirstName;
        std::string     LastName;
        std::string     NickName;
        std::string     PhoneNumber;
        std::string     DarkestSecret;
    public:
        void    set_info(void);
        std::string get_FirstName(void);
        std::string get_LastName(void);
        std::string get_NickName(void);
        std::string get_PhoneNumber(void);
        std::string get_DarkestSecret(void);
};


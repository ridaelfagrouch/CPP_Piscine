/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:30:26 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/22 05:41:50 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "contact.hpp"
#include <iomanip>

class PhoneBook
{
    public:
        std::string check;
        int         index;
    private:
        Contact arr[8];
    public:
        void    creat_contact(int *index, int *count);
        void	search_contact(int count);
        int     check_index(void);
        void    print_contact(PhoneBook phone, int count);
};



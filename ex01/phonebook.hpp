/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:30:26 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/13 23:19:32 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class PhoneBook
{
    private:
        Contact arr[8];
    public:
        void    creat_contact(int *index, int *count);
        void	search_contact(int count);
};


#endif

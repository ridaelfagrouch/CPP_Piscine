/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:30:26 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/13 16:28:43 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define  PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact arr[8];
    public:
        void    creat_contact(int index){
	        this->arr[index].set_info();
        };

        void	search_contact(int index);
};


#endif

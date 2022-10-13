/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:14:55 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/14 00:06:08 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    PhoneBook::creat_contact(int *index, int *count)
{
	if (*index > 7)
		*index = 0;
	if (*index < 8)
		(*count)++;
	this->arr[*index].set_info();
	(*index)++;
}

void	print_header(void)
{
	std::cout << " " << std::setfill('-') << std::setw(44)<< " " << std::endl;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "Index";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "FirstName";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "LastName";
	std::cout << "|" << std::setfill(' ') << std::setw(10) << "NickName" << "|" << std::endl;
	std::cout << " " << std::setfill('-') << std::setw(44) << " " << std::endl;
}

void	PhoneBook::search_contact(int count)
{
	std::string	str;
	print_header();
	for(int i = 0; i <= count; i++)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1;
		str = 
		std::cout << "|" << std::setfill(' ') << std::setw(10) << this->arr[i].get_firstname();
		std::cout << "|" << std::setfill(' ') << std::setw(10) << this->arr[i].get_lastname();
		std::cout << "|" << std::setfill(' ') << std::setw(10) << this->arr[i].get_nickname()<< "|" << std::endl;
		std::cout << " " << std::setfill('-') << std::setw(44)<< " " << std::endl;
	}
}
	
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:14:55 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/20 00:56:14 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*----------------------------------------------------------------------------*/

void    PhoneBook::creat_contact(int *index, int *count)
{
	if (*index == 8)
		*index = 0;
	if (*index < 8 && *count != 7)
		(*count)++;
	this->arr[*index].set_info();
	(*index)++;
}

/*----------------------------------------------------------------------------*/

void	print_header(void)
{
	std::string str[4] = {"Index", "FirstName", "LastName", "NickName"};
	std::cout << " " << std::setfill('-') << std::setw(44)<< " " << std::endl;
	for(int i = 0; i < 4; i++)
		std::cout << "|" << std::setfill(' ') << std::setw(10) << str[i];
	std::cout << "|" << std::endl << " " << std::setfill('-') << std::setw(44) << " " << std::endl;
}

/*----------------------------------------------------------------------------*/

void	print_list(std::string ptr)
{
	std::string	str;
	str = ptr.substr(0, 10);
	ptr.length() > 10 ? str.replace(9, 1, ".") : str;
	std::cout << "|" << std::setfill(' ') << std::setw(10) << str;
	
}

/*----------------------------------------------------------------------------*/

void	PhoneBook::search_contact(int count)
{
	print_header();
	for(int i = 0; i <= count; i++)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1;
		print_list(this->arr[i].get_FirstName());
		print_list(this->arr[i].get_LastName());
		print_list(this->arr[i].get_NickName());
		std::cout << "|" << std::endl << " " << std::setfill('-') << std::setw(44)<< " " << std::endl;
	}
}

/*----------------------------------------------------------------------------*/

bool isNumber(std::string str)
{
	char c;
    for (int i = 0; i < (int)str.length() ; i++) {
		c = str[i];
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

/*----------------------------------------------------------------------------*/

int	PhoneBook::check_index(void)
{
	if (isNumber(this->check))
		return(1);
	else
	{
		std::cout << "\033[1;31minvalid index!!\033[0m " << std::endl;
		return(0);
	}
}

/*----------------------------------------------------------------------------*/


void	PhoneBook::print_contact(PhoneBook phone, int count)
{
	int	index;
	std::cout << "choose your contact index : ";
    std::getline(std::cin, phone.check);
	if (std::cin.eof())
            exit(1);
	while(phone.check_index() == 0)
    {
        std::cout << "choose your contact index : ";
        std::getline(std::cin, phone.check);
		if (std::cin.eof())
            exit(1);
    }
	index = atoi(phone.check.c_str());
	if (index > 0 && index <= 8 && (index - 1 <= count))
	{
		std::cout << "firstName : " << this->arr[index - 1].get_FirstName() << std::endl;
		std::cout << "LastName : " << this->arr[index - 1].get_LastName() << std::endl;
		std::cout << "NickName : " << this->arr[index - 1].get_NickName() << std::endl;
		std::cout << "PhoneNumber : " << this->arr[index - 1].get_PhoneNumber() << std::endl;
		std::cout << "DarkestSecret : " << this->arr[index - 1].get_DarkestSecret() << std::endl;
	}
	else
		std::cout << "\033[1;31minvalid index!!\033[0m " << std::endl;
}
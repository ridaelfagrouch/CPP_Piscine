/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:16:18 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/23 01:18:47 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << " [ DEBUG ] \n I love having extra bacon for my 7XL-double-cheese-triple-pickle-special\n" \
       << "ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ] \n I cannot believe adding extra bacon costs more money. You didn’t put \n" \
        << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ] \n I think I deserve to have some extra bacon for free. I’ve been coming for \n" \
        << "years whereas you started working here since last month." << std::endl << std::endl;
    
}

void Harl::error( void )
{
    std::cout << "[ ERROR ] \n This is unacceptable! I want to speak to the manager now" << std::endl << std::endl;
}

int check_level(std::string arr[], std::string level)
{
    for(int i = 0; i < 4; i++)
        if (arr[i] == level) return i;
    return -1;
}

void Harl::complain( std::string level )
{
    std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = check_level(arr, level);
   switch (i)
   {
        case edebug:
            this->debug();
        case einfo:
            this->info();
        case ewarning:
            this->warning();
        case eerror:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
   }
}
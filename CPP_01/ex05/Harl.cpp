/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 00:16:18 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/22 06:23:15 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special\n" \
       << "ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \n" \
        << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \n" \
        << "years whereas you started working here since last month." << std::endl;
    
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain( std::string level )
{
   void (Harl::*ptr)();
   ptr = &Harl::debug;


   
   
}
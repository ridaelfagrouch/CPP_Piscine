/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 05:14:53 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/27 09:24:39 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{ 
    this->fixed_number = 0; 
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed    Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->fixed_number = rhs.fixed_number;
    }
    return *this;
}
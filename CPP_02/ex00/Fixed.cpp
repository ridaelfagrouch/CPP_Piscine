/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 05:14:53 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/27 06:12:06 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{ 
    this->fixed_number = 0; 
}

Fixed::~Fixed() {}

Fixed    Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        this->fixed_number = rhs.fixed_number;
    }
    return *this;
}
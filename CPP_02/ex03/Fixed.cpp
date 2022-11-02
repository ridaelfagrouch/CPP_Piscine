/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:43 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/02 09:30:32 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{ 
    this->fixed_number = 0;
}

Fixed::Fixed(const Fixed &other)
{
    this->fixed_number = other.fixed_number;
}

Fixed::~Fixed(){}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
        this->fixed_number = rhs.fixed_number;
    return *this;
}

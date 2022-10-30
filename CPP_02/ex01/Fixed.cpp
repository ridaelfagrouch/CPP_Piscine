/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:18:36 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/30 18:23:34 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{ 
    std::cout << "Default constructor called" << std::endl;
    this->fixed_number = 0;
}

Fixed::Fixed(const int int_point)
{ 
    std::cout << "Int constructor called" << std::endl;
    this->fixed_number = int_point << this->scale;
}

Fixed::Fixed(const float float_point)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_number = roundf((float_point) * (float)(1<<this->scale));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixed_number = other.fixed_number;
    *this = other;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &rhs)
{
    if (this != &rhs)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->fixed_number = rhs.fixed_number;
    }
    return *this;
}

float Fixed::toFloat( void ) const
{
    return ((float) this->fixed_number / (float)(1<<scale));
}

int Fixed::toInt( void ) const
{
    return this->fixed_number >> this->scale;
}

std::ostream& operator<< (std::ostream& output, const Fixed & obj)
{
    output << obj.toFloat();
    return output;
}

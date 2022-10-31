/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:46:21 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/31 11:48:40 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    return fixed_number;
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_number = raw;
}

Fixed::Fixed() 
{ 
    this->fixed_number = 0;
}

Fixed::Fixed(const int int_point)
{ 
    this->fixed_number = int_point << this->scale;
}

Fixed::Fixed(const float float_point)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_number = roundf((float_point) * (float)(1<<this->scale));
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

Fixed Fixed::operator++(int)
{
    Fixed tmp;
    tmp.fixed_number =  fixed_number++;
    return tmp;
}

Fixed Fixed::operator++()
{
    Fixed tmp;
    tmp.fixed_number = ++fixed_number;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp;
    tmp.fixed_number = fixed_number--;
    return tmp;
}

Fixed Fixed::operator--()
{
    Fixed tmp;
    tmp.fixed_number = --fixed_number;
    return tmp;
}

Fixed Fixed::operator * (const Fixed &obj)
{
    Fixed tmp(this->toFloat() * obj.toFloat());
    return tmp;
}

Fixed Fixed::operator + (const Fixed &obj)
{
    Fixed tmp(this->toFloat() + obj.toFloat());
    return tmp;
}

Fixed Fixed::operator - (const Fixed &obj)
{
    Fixed tmp(this->toFloat() - obj.toFloat());
    return tmp;
}

Fixed Fixed::operator / (const Fixed &obj)
{
    Fixed tmp(this->toFloat() / obj.toFloat());
    return tmp;
}

Fixed &Fixed::min(Fixed& ob1, Fixed& ob2)
{
    return ob1.fixed_number < ob2.fixed_number ? ob1 : ob2;
}

const Fixed &Fixed::min(const Fixed& ob1, const Fixed& ob2)
{
    return ob1.fixed_number < ob2.fixed_number ? ob1 : ob2;
}

Fixed &Fixed::max(Fixed& ob1, Fixed& ob2)
{
    return ob1.fixed_number > ob2.fixed_number ? ob1 : ob2;
}
    
const Fixed &Fixed::max(const Fixed& ob1, const Fixed& ob2)
{
    return ob1.fixed_number > ob2.fixed_number ? ob1 : ob2;
}

bool Fixed::operator > (const Fixed &obj)
{
    return fixed_number > obj.getRawBits();
}

bool Fixed::operator < (const Fixed &obj)
{
    return fixed_number < obj.getRawBits();
}

bool Fixed::operator >= (const Fixed &obj)
{
    return fixed_number >= obj.getRawBits();
}

bool Fixed::operator <= (const Fixed &obj)
{
    return fixed_number <= obj.getRawBits();
}

bool Fixed::operator == (const Fixed &obj)
{
    return fixed_number == obj.getRawBits();
}

bool Fixed::operator != (const Fixed &obj)
{
    return fixed_number != obj.getRawBits();
}
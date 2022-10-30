/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:46:25 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/30 17:16:22 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
    int fixed_number;
    static const int scale = 8;
public:
    Fixed();
    Fixed(const int int_point);
    Fixed(const float float_point);
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &rhs);
    friend bool operator > (Fixed &lhs, Fixed &rhs); 
    friend bool operator < (Fixed &lhs, Fixed &rhs); 
    friend bool operator >= (Fixed &lhs, Fixed &rhs); 
    friend bool operator <= (Fixed &lhs, Fixed &rhs); 
    friend bool operator == (Fixed &lhs, Fixed &rhs); 
    friend bool operator != (Fixed &lhs, Fixed &rhs); 
    Fixed operator++(int);
    Fixed operator++();
    Fixed operator--(int);
    Fixed operator--();
    Fixed operator * (Fixed rhs);
    Fixed operator + (Fixed rhs);
    Fixed operator - (Fixed rhs);
    Fixed operator / (Fixed rhs);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed &min(Fixed& ob1, Fixed& ob2);
    static const Fixed &min(const Fixed& ob1, const Fixed& ob2);
    static Fixed &max(Fixed& ob1, Fixed& ob2);
    static const Fixed &max(const Fixed& ob1, const Fixed& ob2);
};

std::ostream& operator<< (std::ostream& output, const Fixed & obj);
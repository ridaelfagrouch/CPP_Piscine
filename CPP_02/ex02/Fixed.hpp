/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:46:25 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/31 11:33:37 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

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
    int getRawBits(void) const;
    void    setRawBits(int const raw);
    Fixed &operator = (const Fixed &rhs);
    Fixed operator * (const Fixed &obj);
    Fixed operator + (const Fixed &obj);
    Fixed operator - (const Fixed &obj);
    Fixed operator / (const Fixed &obj);
    // bool operator > (const Fixed &obj);
    // bool operator < (const Fixed &obj);
    // bool operator >= (const Fixed &obj);
    // bool operator <= (const Fixed &obj);
    // bool operator == (const Fixed &obj);
    // bool operator != (const Fixed &obj);
    Fixed operator ++ (int);
    Fixed operator ++ ();
    Fixed operator -- (int);
    Fixed operator -- ();
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed &min(Fixed& ob1, Fixed& ob2);
    static const Fixed &min(const Fixed& ob1, const Fixed& ob2);
    static Fixed &max(Fixed& ob1, Fixed& ob2);
    static const Fixed &max(const Fixed& ob1, const Fixed& ob2);
};

std::ostream& operator<< (std::ostream& output, const Fixed & obj);

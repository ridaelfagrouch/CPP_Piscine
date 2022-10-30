/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 03:49:34 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/30 13:02:04 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int fixed_number;
    static const int scale = 8; // 1/2^8 //1010 1001 0101 1001 1010 1110.1010 1011
public:
    Fixed();
    Fixed(const int int_point);
    Fixed(const float float_point);
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator = (const Fixed &rhs);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<< (std::ostream& output, Fixed & obj);
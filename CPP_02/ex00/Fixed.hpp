/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 05:12:06 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/28 02:58:52 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
    int fixed_number;
    static const int fractional = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &rhs);
    int getRawBits(void) const;
    void    setRawBits(int const raw);
};




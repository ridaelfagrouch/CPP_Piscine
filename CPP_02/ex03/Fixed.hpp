/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:06 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/02 09:30:53 by rel-fagr         ###   ########.fr       */
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
};
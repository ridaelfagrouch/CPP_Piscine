/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:13 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 16:34:06 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
   Fixed x;
   Fixed y;

public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point &obj);
    Point &operator=(const Point &rhs);
    Fixed get_x() const;
    Fixed get_y() const;
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
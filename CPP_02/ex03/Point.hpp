/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:13 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 11:29:20 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "Fixed.hpp"

// class Point
// {
// private:
//     const int x;
//     const int y;
// public:
//     Point();
//     Point(const float x, const float y);
//     ~Point();
//     Point(const Point &other);
//     Point &operator=(const Point &rhs);
//     bool bsp( Point const a, Point const b, Point const c, Point const point);
// };
#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point &src);
    Point &operator=(const Point &other);
    Fixed getX() const;
    Fixed getY() const;
    std::string toString() const;
    ~Point();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:40 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 11:30:22 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const Point &src) : x(src.x), y(src.y)
{
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &other) 
{
    this->x = other.x;
    this->y = other.y;
    return *this;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}

std::string Point::toString() const
{
    std::string ret;
    ret = "( " + std::to_string(x.toFloat()) + ", " + std::to_string(y.toFloat()) + " )";
    return ret;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:40 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 16:34:15 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    this->x = Fixed(0);
    this->y = Fixed(0);
}

Point::Point(const Point &obj)
{
    this->x = obj.x;
    this->y = obj.y;
}

Point::Point(const Fixed x_, const Fixed y_)
{
    this->x = x_;
    this->y = y_;
}

Point::~Point(){}

Point &Point::operator=(const Point &rhs) 
{
    if (this != &rhs)
    {
        this->x = rhs.x;
        this->y = rhs.y;     
    }
    return *this;
}

Fixed Point::get_x() const
{
    return x;
}

Fixed Point::get_y() const
{
    return y;
}
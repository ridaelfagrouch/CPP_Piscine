/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:40 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/02 09:56:56 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Point.hpp"

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(const float x, const float y)
{
    this->x = x;
    this->y = y;
}

Point::~Point(){}

Point::Point(const Point &other){}

Point &Point::operator=(const Point &rhs){
   if (this != &rhs){}
   return *this;
}
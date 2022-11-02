/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:13 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/02 09:55:41 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
    const int x;
    const int y;
public:
    Point();
    Point(const float x, const float y);
    ~Point();
    Point(const Point &other);
    Point &operator=(const Point &rhs);
    bool bsp( Point const a, Point const b, Point const c, Point const point);
};
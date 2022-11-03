/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:07:52 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 11:27:00 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point AB = Point(b.getX() - a.getX(), b.getY() - a.getY());
    Point BC = Point(c.getX() - b.getX(), c.getY() - b.getY());
    Point CA = Point(a.getX() - c.getX(), a.getY() - c.getY());

    Point AP = Point(point.getX() - a.getX(), point.getY() - a.getY());
    Point BP = Point(point.getX() - b.getX(), point.getY() - b.getY());
    Point CP = Point(point.getX() - c.getX(), point.getY() - c.getY());

    Fixed crossAB = Fixed(AB.getX() * AP.getY() - AB.getY() * AP.getX());
    Fixed crossBC = Fixed(BC.getX() * BP.getY() - BC.getY() * BP.getX());
    Fixed crossCA = Fixed(CA.getX() * CP.getY() - CA.getY() * CP.getX());

    if (crossAB <= 0 && crossBC <= 0 && crossCA <= 0)
        return true;
    if (crossAB >= 0 && crossBC >= 0 && crossCA >= 0)
        return true;
    return false;
}

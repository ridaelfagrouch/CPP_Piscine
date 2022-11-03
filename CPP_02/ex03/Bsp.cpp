/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:07:52 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 16:26:36 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point pnt)
{
    Point AB = Point(b.get_x() - a.get_x(), b.get_y() - a.get_y());
    Point BC = Point(c.get_x() - b.get_x(), c.get_y() - b.get_y());
    Point CA = Point(a.get_x() - c.get_x(), a.get_y() - c.get_y());
    
    Point AP = Point(pnt.get_x() - a.get_x(), pnt.get_y() - a.get_y());
    Point BP = Point(pnt.get_x() - b.get_x(), pnt.get_y() - b.get_y());
    Point CP = Point(pnt.get_x() - c.get_x(), pnt.get_y() - c.get_y());
    Fixed crossP_AB = Fixed(AB.get_x() * AP.get_y() - AB.get_y() * AP.get_x());
    Fixed crossP_BC = Fixed(BC.get_x() * BP.get_y() - BC.get_y() * BP.get_x());
    Fixed crossP_CA = Fixed(CA.get_x() * CP.get_y() - CA.get_y() * CP.get_x());

    if (crossP_AB <= 0 && crossP_BC <= 0 && crossP_CA <= 0)
        return true;
    if (crossP_AB >= 0 && crossP_BC >= 0 && crossP_CA >= 0)
        return true;
    return false;
}

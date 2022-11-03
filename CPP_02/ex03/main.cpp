/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:37 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 11:31:44 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point A,B,C;
    Point P;

    A = Point(0, 0);
    B = Point(0, 2);
    C = Point(2, 0);
    P = Point(0.5f, 0.5f);
    std::cout << "For triangle " << A.toString() << B.toString() << C.toString() << ", the point " << P.toString() << " ";
    if (bsp(A, B, C, P))
        std::cout << "is inside\n";
    else
        std::cout << "is outside\n";
    return 0;
}
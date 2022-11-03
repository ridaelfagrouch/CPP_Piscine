/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:37 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/03 16:38:51 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point A(Point(4, 6)),B(Point(6, 2)),C(Point(8.45f, 9)),check;
    
    check = Point(8.46f, 9);

    bsp(A, B, C, check) ? std::cout << "is inside\n" : std::cout << "is outside\n";
    return 0;
}
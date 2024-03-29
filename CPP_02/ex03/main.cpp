/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:08:37 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/04 09:38:29 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point A(Point(4, 6)),B(Point(6, 2)),C(Point(8.45f, 9)),check;
    
    check = Point(7, 9);

    bsp(A, B, C, check) ? std::cout << "inside\n" : std::cout << "outside\n";
    return 0;
}
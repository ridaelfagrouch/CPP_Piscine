/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FunTemp.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:30:37 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/23 15:38:50 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


template <typename Type> Type max(Type &x, Type &y)
{
    return (x > y) ? x : y;
}

template <typename Type> Type min(Type &x, Type &y)
{
    return (x > y) ? y : x;
}

template <typename Type> void swap(Type &x, Type &y)
{
    Type tmp;

    tmp = y;
    y = x;
    x = tmp;
}
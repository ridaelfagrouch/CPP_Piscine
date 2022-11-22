/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:43:07 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/22 16:40:19 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename type> void iter(type *ptr, size_t len, type (*f)(type))
{
    for(size_t i = 0; i < len; i++)
        ptr[i] = f(ptr[i]);
}

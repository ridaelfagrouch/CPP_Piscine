/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:07:52 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/24 18:29:29 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include<algorithm>
#include <time.h>

class NotFound: public std::exception 
{
	virtual const char* what() const throw()
    {
        return " Not found";
    }
};

template <typename T>
void easyfind(T &container, int find)
{
   typename T::iterator location;

   location = std::find( container.begin(), container.end(), find);
    if (*location == find)
        std::cout << "find" << std::endl;
    else
        throw NotFound();

}
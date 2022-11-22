/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:43:10 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/22 18:10:38 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename type> void out(type &ptr)
{
    std::cout << ptr << std::endl;
}

int main()
{
    std::string ptr1[] = {"rida", "ahmed", "sami"};
    int ptr2[] = {0, 1, 2, 55, 88};
    char ptr3[]= {'w', 'd', 'k', 'r'};
    float ptr4[] = {10, 15.44, 68.47, 99.75};

    size_t i = sizeof(ptr1) / sizeof(ptr1[0]);
    iter(ptr1, i, out);
    
    std::cout << "---------------------------" << std::endl;
    
    i = sizeof(ptr2) / sizeof(ptr2[0]);
    iter(ptr2, i, out);

    std::cout << "---------------------------" << std::endl;
    
    i = sizeof(ptr3) / sizeof(ptr3[0]);
    iter(ptr3, i, out);
    
    std::cout << "---------------------------" << std::endl;

    i = sizeof(ptr4) / sizeof(ptr4[0]);
    iter(ptr4, i, out);
}
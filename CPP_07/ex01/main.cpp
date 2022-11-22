/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:43:10 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/22 16:48:37 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

char pow(char i)
{
    return (i + 3);
}

int main()
{
    char *ptr = new char[10];
    int  j = 0;
    for(char i = 'a'; i < 'a' + 10; i++)
    {
        ptr[j] = i;
        std::cout << ptr[j] << std::endl;
        j++;
    }
    std::cout << "-------------------------------" << std::endl;
    iter(ptr, 10, pow);
    for(int i = 0; i < 10; i++)
        std::cout << ptr[i] << std::endl;
    delete [] ptr;
}
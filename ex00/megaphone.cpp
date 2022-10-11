/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:27:28 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/11 16:13:50 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void    tou_pper(char *str)
{
    int i = -1;
    while(++i < (int)strlen(str))
        std::cout << (char)toupper(str[i]);
    std::cout << " ";
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        while (++i < ac)
            tou_pper(av[i]);
        std::cout << std::endl;
    }
    else
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE " << std::endl;
}
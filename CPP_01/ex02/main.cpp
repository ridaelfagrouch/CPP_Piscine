/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:27:14 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/10/20 00:34:50 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    
    std::cout << "str_address: " << &str << std::endl;
    std::cout << "ptr_address: " << ptr << std::endl;
    std::cout << "ref_address: " << &ref << std::endl;
    std::cout << "str_value: " << str << std::endl;
    std::cout << "ptr_value: " << *ptr << std::endl;
    std::cout << "ref_value: " << ref << std::endl;
}
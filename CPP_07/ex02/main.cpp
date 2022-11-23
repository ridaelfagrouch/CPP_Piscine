/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:15:03 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/23 15:17:59 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void test(void)
{
    Array<int> intArray1(10);
    Array<float> floatArray1(5);
    Array<std::string> stringArray1(12);

    try
    {
        Array<int> intArray2(intArray1);
        Array<int> intArray3;
    
        intArray3 = intArray2;
        std::cout << "int array size : " << intArray1.size() << std::endl;
        std::cout << "float array size : " << floatArray1.size() << std::endl;
        std::cout << "string array size : " << stringArray1.size() << std::endl;

        std::cout << "int array 1: " << intArray1[5] << std::endl;
        std::cout << "int array 2: " << intArray2[5] << std::endl;
        std::cout << "int array 3: " << intArray3[5] << std::endl;
        std::cout << intArray1.operator[](12) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "int Array index " << e.what() << '\n';
    }
    
    std::cout << std::endl;
    try
    {
        Array<float> floatArray2(floatArray1);
        Array<float> floatArray3;
    
        floatArray3 = floatArray2;
        std::cout << "float array 1: " << floatArray1[2] << std::endl;
        std::cout << "float array 2: " << floatArray2[2] << std::endl;
        std::cout << "float array 3: " << floatArray3[2] << std::endl;
        std::cout << floatArray1.operator[](10) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "float Array index " << e.what() << '\n';
    }

    std::cout << std::endl;
    try
    {
        Array<std::string> stringArray2(stringArray1);
        Array<std::string> stringArray3;
    
        stringArray3 = stringArray2;
        std::cout << "string array 1: " << stringArray1[4] << std::endl;
        std::cout << "string array 2: " << stringArray2[4] << std::endl;
        std::cout << "string array 3: " << stringArray3[4] << std::endl;
        std::cout << stringArray1.operator[](15) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << "string Array index " << e.what() << '\n';
    }
    std::cout << std::endl;
}

int main()
{
    test();
    // system("leaks Array");
}
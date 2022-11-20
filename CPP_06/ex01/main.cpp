/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:24:58 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 00:57:26 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


int main()
{
    Data obj(100);
    Data *ptr = obj.deserialize(obj.serialize(&obj));

    std::cout << &obj << " | " << ptr << std::endl;
    std::cout << obj.Test << " | " << ptr->Test << std::endl;
    return 0;
}
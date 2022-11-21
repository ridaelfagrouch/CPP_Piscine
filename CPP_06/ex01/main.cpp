/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:24:58 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 10:07:16 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


int main()
{
    Data obj(100, "rid");
    Data *ptr = obj.deserialize(obj.serialize(&obj));

    std::cout << "obj : " << obj.Name << " | " << &obj << " | " << obj.Test << " | " <<std::endl;
    std::cout << "ptr : " << ptr->Name << " | " << ptr << " | " << ptr->Test << " | " <<std::endl;
    return 0;
}
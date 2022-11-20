/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:24:50 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 00:49:20 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){}

Data::Data(uintptr_t test) : Test(test)
{}

Data::~Data(){}

Data::Data(Data &other)
{
	*this = other;
}

Data    &Data::operator=(const Data &rhs)
{
	if (this != &rhs)
        *this = rhs;
	return *this;
}

uintptr_t Data::serialize(Data *ptr)
{
    uintptr_t uptr = reinterpret_cast<uintptr_t>(ptr);
	return (uptr);
}

Data* Data::deserialize(uintptr_t raw)
{
    Data *obj = reinterpret_cast<Data *>(raw);
	return (obj);
}
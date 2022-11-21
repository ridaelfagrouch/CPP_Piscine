/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:24:50 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 10:06:55 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){}

Data::Data(uintptr_t test, std::string name) : Test(test), Name(name)
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
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Data::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
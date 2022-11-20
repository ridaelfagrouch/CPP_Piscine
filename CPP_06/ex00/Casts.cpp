/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:39 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 00:31:57 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casts.hpp"

Casts::Casts()
{
    std::string str = "error: Default constructor not valid";
    throw str;
}

Casts::~Casts(){}

Casts::Casts(char *argv)
{
    type = default_;
    input = static_cast<std::string>(argv);
    detectType(argv);
}

Casts::Casts( Casts &obj)
{
    *this = obj;
    return ;
}

Casts& Casts::operator=(const Casts &obj)
{
    if (this != &obj)
    {
        type = obj.type;
        data = obj.data;
    }
    return (*this);
}

bool Casts::isNumber(std::string str)
{
	char c;
    for (int i = 0; i < (int)str.length() ; i++) {
		c = str[i];
        if (c == '.')
            continue ;
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

void Casts::detectType(char *argv)
{
    this->str = static_cast<std::string>(argv);
    if (input.length() == 1)
    {
        char c = input[0];
        (c >= 48 && c <= 57) ? this->setValue(c - 48) : this->setValue(c);
    }
    else if (!(str.compare("-inff")) || !(str.compare("-inf")))
        type = Ninff_;
    else if (!(str.compare("+inff")) || !(str.compare("+inf")) || !(str.compare("inff")) || !(str.compare("inf")))
        type = Pinff_;
    else if (!(str.compare("nanf")) || !(str.compare("nan")))
        type = nanf_;
    else
    {
        char *end;
        this->setValue(strtod(argv, &end));
        std::string error = "error: invalid input";
        double check = getValue();
        if (check > INT_MAX || check < INT_MIN)
            throw error;
    }
}

void Casts::convertall()
{
    this->castChar();
    this->castInt();
    this->castFloat();
    this->castDouble();
}

void    Casts::castChar(void)
{
    if (type > 0 || data < 0 || data > 126)
        std::cout << "Char: Impossible" << std::endl;
    else if (data >= 0 && data <= 31)
        std::cout << "Char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(data);
        std::cout << "Char: " << c << std::endl;
    }
}

#include <stdio.h>

void    Casts::castInt(void)
{
    int i = static_cast<int>(data);
    type > 0 ? std::cout << "Integer: Impossible" << std::endl : std::cout << "Integer: " << i << std::endl;
}

void    Casts::castFloat(void)
{
    if (type == Ninff_)
        std::cout << "Float: -inff" << std::endl;
    else if (type == Pinff_)
        std::cout << "Float: +inff" << std::endl;
    else if (type == nanf_)
        std::cout << "Float: nanf" << std::endl;
    else
    {
        float f = static_cast<float>(data);
        int i = static_cast<int>(data);
        if (i == f && isNumber(input) && input.length() < 7)
            std::cout << "Float: " << f << ".0f" << std::endl;
        else
            std::cout << "Float: " << f << "f" << std::endl;
    }
}

void    Casts::castDouble(void)
{
    if (type == Ninff_)
        std::cout << "Double: -inf" << std::endl;
    else if (type == Pinff_)
        std::cout << "Double: +inf" << std::endl;
    else if (type == nanf_)
        std::cout << "Double: nan" << std::endl;
    else
    {
        long long i = static_cast<int>(data);
        if (i == data && isNumber(input) && input.length() < 7)
            std::cout << "Double: " << data << ".0" << std::endl;
        else
            std::cout << "Double: " << data << std::endl;
    }
}

int    Casts::getType(void)
{
    return (type);
}

std::string&    Casts::getInput(void)
{
    return (input);
}

double    Casts::getValue(void)
{
    return (data);
}

void    Casts::setValue(double D)
{
    data = D;
}

std::ostream &operator<<( std::ostream & out, Casts &obj)
{
	out << "input: " << obj.getInput() << ", value: " << obj.getValue() << ", type: " << obj.getType() << std::endl;
	return out;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:39 by garra             #+#    #+#             */
/*   Updated: 2022/11/20 18:50:28 by rel-fagr         ###   ########.fr       */
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
    input = obj.input;
    *this = obj;
    return ;
}

Casts& Casts::operator=( Casts &obj)
{
    if (this != &obj)
    {
        type = obj.type;
        value = obj.value;
    }
    return (*this);
}

void Casts::detectType(char *argv)
{
    std::string str = static_cast<std::string>(argv);
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
    }
}

void    Casts::castChar(void)
{
    if (type > 0 || value < 0 || value > 126)
        std::cout << "Char: Impossible" << std::endl;
    else if (value >= 0 && value <= 31)
        std::cout << "Char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(value);
        std::cout << "Char: " << c << std::endl;
    }
}

void    Casts::castInt(void)
{
    int i = static_cast<int>(value);
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
        float f = static_cast<float>(value);
        int i = static_cast<int>(value);
        if (i == f)
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
        int i = static_cast<int>(value);
        if (i == value)
            std::cout << "Double: " << value << ".0" << std::endl;
        else
            std::cout << "Double: " << value << std::endl;
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
    return (value);
}

void    Casts::setValue(double x)
{
    value = x;
}

std::ostream &operator<<( std::ostream & out, Casts &obj)
{
	out << "input: " << obj.getInput() << ", value: " << obj.getValue() << ", type: " << obj.getType() << std::endl;
	return out;
}
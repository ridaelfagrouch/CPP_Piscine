/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:39 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 13:31:40 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casts.hpp"

Casts::Casts()
{
    std::string str = "error: Default constructor not valid";
    throw str;
}

Casts::~Casts(){}

Casts::Casts(char *av)
{
    type = default_;
    setValue(0);
    input = static_cast<std::string>(av);
    detectType(av);
}

Casts::Casts( Casts &other)
{
    *this = other;
    return ;
}

Casts& Casts::operator=(const Casts &rhs)
{
    if (this != &rhs)
       *this = rhs;
    return (*this);
}

bool Casts::isNumber(std::string str)
{
	char c;
    for (int i = 0; i < (int)str.length() ; i++) {
		c = str[i];
        if (c == '.' || (c == 'f' && i == (int)(str.length() - 1)))
            continue ;
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

void Casts::detectType(char *av)
{
    this->str = static_cast<std::string>(av);
    if (input.length() == 1)
    {
        char c = input[0];
        (c >= 48 && c <= 57) ? this->setValue(c - 48) : this->setValue(c);
    }
    else if (!(str.compare("-inff")) || !(str.compare("-inf")))
        type = Ninff;
    else if (!(str.compare("+inff")) || !(str.compare("+inf")) || \
        !(str.compare("inff")) || !(str.compare("inf")))
        type = Pinff;
    else if (!(str.compare("nanf")) || !(str.compare("nan")))
        type = nanf;
    else
    {
        char *end;
        this->setValue(strtod(av, &end));
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

void    Casts::castInt(void)
{
    int i = static_cast<int>(data);
    type > 0 ? std::cout << "Integer: Impossible" << std::endl : \
        std::cout << "Integer: " << i << std::endl;
}

void Casts::checkDoubleFloatPseudo(char c)
{
    if (c == 'f')
    {
        if (type == Ninff)
            std::cout << "Float: -inff" << std::endl;
        else if (type == Pinff)
            std::cout << "Float: +inff" << std::endl;
        else if (type == nanf)
        std::cout << "Float: nanf" << std::endl;
    }
    if (c == 'd')
    {
        if (type == Ninff)
            std::cout << "Double: -inf" << std::endl;
        else if (type == nanf)
            std::cout << "Double: nan" << std::endl;
        else if (type == Pinff)
            std::cout << "Double: +inf" << std::endl;
    }
    
}

void    Casts::castDouble(void)
{
    if (type)
       checkDoubleFloatPseudo('d');
    else
    {
        long long i = static_cast<int>(data);
        if (i == data && isNumber(input) && input.length() < 7)
            std::cout << "Double: " << data << ".0" << std::endl;
        else
            std::cout << "Double: " << data << std::endl;
    }
}

void    Casts::castFloat(void)
{
    if (type)
       checkDoubleFloatPseudo('f');
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
	out << "\n" << "input: " << obj.getInput() << " | " << " value: " << \
        obj.getValue() << " | " << " type: " << obj.getType() << std::endl;
	return out;
}
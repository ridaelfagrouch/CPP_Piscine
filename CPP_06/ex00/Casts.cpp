/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:39 by garra             #+#    #+#             */
/*   Updated: 2022/11/20 14:56:17 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Casts.hpp"


Casts::Casts()
{
    std::cout << "Default Constructor called for Casts" << std::endl;
    type = 0;

    return ;
}

Casts::~Casts()
{
    std::cout << "Destrutor called for Casts" << std::endl;
    return ;
}

Casts::Casts(char *argv)
{
    std::cout << "Constructor called for Casts" << std::endl;
    type = 0;
    input = static_cast<std::string>(argv);
    detectType(argv);
    return ;
}

Casts::Casts( Casts &obj) : input(obj.input)
{
    std::cout << "Copy Constructor called for Casts" << std::endl;
    *this = obj;
    return ;
}

Casts& Casts::operator=( Casts &obj)
{
    std::cout << "Assignation Operator Constructor called for Casts" << std::endl;
    type = obj.type;
    value = obj.value;
    return (*this);
}

// MEMBER FUNCTIONS

void Casts::detectType(char *argv)
{
    std::string obj = static_cast<std::string>(argv);
    if (input.length() == 1)
    {
        char c = input[0];
        if (c >= 48 && c <= 57)
            this->setValue(c - 48);
        else
            this->setValue(c);
    }
    else if (!(obj.compare("-inff")) || !(obj.compare("-inf")))
        type = 1;
    else if (!(obj.compare("+inff")) || !(obj.compare("+inf")) || !(obj.compare("inff")) || !(obj.compare("inf")))
        type = 2;
    else if (!(obj.compare("nanf")) || !(obj.compare("nan")))
        type = 3;
    else
    {
        char *end;
        this->setValue(strtod(argv, &end));
    }
}

void    Casts::convChar(void)
{
    if (type > 0 ||value < 0 || value > 126)
        std::cout << "Char: Impossible" << std::endl;
    else if (value >= 0 && value <= 31)
        std::cout << "Char: Non displayable" << std::endl;
    else
    {
        char c = static_cast<char>(value);
        std::cout << "Char: " << c << std::endl;
    }
}

void    Casts::convInt(void)
{
    if (type > 0)
        std::cout << "Integer: Impossible" << std::endl;    
    else
    {
        int i = static_cast<int>(value);
        std::cout << "Integer: " << i << std::endl; 
    }
   
}

void    Casts::convFloat(void)
{
    if (type == 1)
        std::cout << "Float: -inff" << std::endl;    
    else if (type == 2)
        std::cout << "Float: +inff" << std::endl; 
    else if (type == 3)
        std::cout << "Float: nanf" << std::endl; 
    else 
    {
        float f = static_cast<float>(value);
        std::cout << "Float: " << f << "f" << std::endl; 
    }    
}

void    Casts::convDouble(void)
{
    if (type == 1)
        std::cout << "Float: -inf" << std::endl;    
    else if (type == 2)
        std::cout << "Float: +inf" << std::endl; 
    else if (type == 3)
        std::cout << "Float: nan" << std::endl; 
    else 
        std::cout << "Double: " << value << std::endl;        
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
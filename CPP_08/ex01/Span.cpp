/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:38:36 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/24 23:28:52 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Span.hpp"

Span::Span(unsigned int size)
{
    Size = size;
    i = 0;
}

Span::~Span(){}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &rhs)
{
    if (this != &rhs)
        *this = rhs;
   return *this;
}

int Span::shortestSpan()
{
    excep =  "no shortestSpan found";
    if (i >= 2)
    {
        std::vector<int>::iterator vBegin = SetSpan1.begin();
        std::vector<int>::iterator vEnd = SetSpan1.end();
        while (vBegin != vEnd)
        {
            shortest.insert(abs(*(++vBegin) - *(--vBegin)));
            vBegin++;
        }
        return (*(shortest.begin()));
    }
    else
        throw excep;
}

int Span::longestSpan()
{
    excep =  "no longestSpan found";
    if (i > 1)
    {
        Begin = SetSpan.begin();
        End = SetSpan.end();
        return (*(--End) - *(Begin));
    }
    else
        throw excep;
}

void Span::addNumber(int add)
{
   excep = "no available space in set";
    if (++i <= Size)
    {
        SetSpan.insert(add);
        SetSpan1.push_back(add);
    }
    else
        throw excep;
}

void Span::print()
{
    for (std::vector<int>::iterator i = SetSpan1.begin(); i != SetSpan1.end(); ++i)
        std::cout << *i << " " ;
    std::cout << "\n" ;
}

void Span::RangeOfIterators(unsigned int range)
{
    excep = "no valide range";
    if (range > 0 && range <= Size)
    {
        int random ;
        for (int j = i; j < (int)range && j < (int)Size; j++)
        {
            srand((unsigned)j);
            random = (rand() % 100);
            SetSpan.insert(random);
            SetSpan1.push_back(random);
        }
    }
    else
        throw excep;
}
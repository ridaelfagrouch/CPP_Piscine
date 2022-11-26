/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:38:36 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/25 14:25:43 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Span.hpp"

Span::Span()
{
    Size = 0;
    i = 0;
}

Span::Span(unsigned int size)
{
    if ((int)size < 0)
        throw static_cast<std::string>("invalid size");
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
    if (i > 1 && Size > 0)
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
        throw static_cast<std::string> ("no shortestSpan found");
}

int Span::longestSpan()
{
    if (i > 1 && Size > 0)
    {
        Begin = SetSpan.begin();
        End = SetSpan.end();
        return (*(--End) - *(Begin));
    }
    else
        throw static_cast<std::string> ("no longestSpan found");
}

void Span::addNumber(int add)
{
    if (++i <= Size && Size > 0)
    {
        SetSpan.insert(add);
        SetSpan1.push_back(add);
    }
    else
        throw static_cast<std::string> ("no available space in set");
}

void Span::print()
{
    for (std::vector<int>::iterator i = SetSpan1.begin(); i != SetSpan1.end(); ++i)
        std::cout << *i << " " ;
    std::cout << "\n" ;
}

void Span::RangeOfIterators(unsigned int range)
{
    if (range > 0 && range <= Size && Size > 0)
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
        throw static_cast<std::string> ("no valide range");
}
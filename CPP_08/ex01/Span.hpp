/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:38:39 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/25 14:26:06 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <set>

class Span
{
private:
    unsigned int i;
    unsigned int Size;
    std::set<int> shortest;
    std::set<int> SetSpan;
    std::vector<int> SetSpan1;
    std::set<int>::iterator Begin;
    std::set<int>::iterator End;
public:
    Span();
    Span(unsigned int size);
    ~Span();
    Span(const Span &other);
    Span &operator=(const Span &rhs);
    int shortestSpan();
    int longestSpan();
    void addNumber(int add);
    void print();
    void RangeOfIterators(unsigned int range);
};
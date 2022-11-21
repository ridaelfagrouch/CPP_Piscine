/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:11:05 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/21 10:44:40 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base
{
public:
    Base();
    virtual ~Base();
    Base(const Base &other);
    Base &operator=(const Base &rhs);
};

class A : public Base
{
public:
    std::string type;
    A():type("A"){};
};

class B : public Base
{
public:
    std::string type;
    B():type("B"){};
};

class C : public Base
{
public:
    std::string type;
    C():type("C"){};
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
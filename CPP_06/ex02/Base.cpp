/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:11:02 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/21 13:00:15 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Base.hpp"

Base::Base(){}

Base::~Base(){}

Base::Base(const Base &other)
{
    *this = other;
}

Base &Base::operator=(const Base &rhs){
   if (this != &rhs)
   {
       *this = rhs; 
   }
   return *this;
}

Base *generate(void)
{
    srand((unsigned) time(NULL));
    int random = (rand() % 91);
    Base *ptr;

    if (random >= 0 && random < 30)
        ptr = new A();
    else if (random >= 30 && random < 60)
        ptr = new B();
    else
        ptr = new C();
    return ptr;
}

void identify(Base* p)
{
    A *ptr = dynamic_cast<A*>(p);
    B *ptr1 = dynamic_cast<B*>(p);
    C *ptr2 = dynamic_cast<C*>(p);

    if (ptr)
        std::cout << "cast to " << ptr->type << " ✅​" << std::endl;
    else if (ptr1)
        std::cout << "cast to " << ptr1->type << " ✅​" << std::endl;
    else
        std::cout << "cast to " << ptr2->type << " ✅​" << std::endl;
}

void identify(Base& p)
{
    int i = 1;
    
    try
    {
        A &ptr = dynamic_cast<A&>(p);
        std::cout << "cast to " << ptr.type << " ✅​" << std::endl;
        if (i == 1) return;
    }
    catch(std::bad_cast exp)
    {
        std::cout << "Caught bad cast to derived class A" << std::endl;
    }

    try
    {
        B &ptr1 = dynamic_cast<B&>(p);
        std::cout << "cast to " << ptr1.type << " ✅​" << std::endl;
        if (i == 1) return;
    }
    catch(std::bad_cast exp)
    {
        std::cout << "Caught bad cast to derived class B" << std::endl;
    }

    try
    {
        C &ptr2 = dynamic_cast<C&>(p);
        std::cout << "cast to " << ptr2.type << " ✅​"  << std::endl;
        if (i == 1) return;
    }
    catch(std::bad_cast exp)
    {
        std::cout << "Caught bad cast to derived class C" << std::endl;
    }
}
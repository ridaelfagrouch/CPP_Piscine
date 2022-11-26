/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:54:20 by garra             #+#    #+#             */
/*   Updated: 2022/11/26 11:43:16 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include <vector>
#include <deque>
#include <list>
#include <iterator>
#include <stack>


template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
public:
	MutantStack<T, Container>(){};
	~MutantStack<T, Container>(){};
	MutantStack<T, Container>(MutantStack<T, Container> const & other){this->c = other.c;};
	MutantStack<T, Container> & operator=(MutantStack<T, Container> const & rhs);

	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator revIterator;

	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}

	revIterator rbegin() {return this->c.rbegin();}
	revIterator rend() {return this->c.rend();}
};

template<typename T, typename Container >
MutantStack<T, Container> & MutantStack<T, Container>::operator=(MutantStack<T, Container> const & rhs)
{
	if (this != &rhs)
		this->c = std::move(rhs.c);
	return (*this);
}
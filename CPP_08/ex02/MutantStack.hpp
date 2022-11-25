/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:54:20 by garra             #+#    #+#             */
/*   Updated: 2022/11/26 00:15:59 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include <deque>
#include <iterator>
#include <stack>


template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {
public:
	MutantStack():
	~MutantStack();
	MutantStack<T, Container>(MutantStack<T, Container> const & other);
	MutantStack<T, Container> & operator=(MutantStack<T, Container> const & rhs);

	typedef typename Container::const_iterator begin() const {return this->c.begin();}
	typedef typename Container::const_iterator end() const {return this->c.end();}

	typedef typename Container::iterator begin() {return this->c.begin();}
	typedef typename Container::iterator end() {return this->c.end();}

	typedef typename Container::const_reverse_iterator rbegin() const {return this->c.rbegin();}
	typedef typename Container::const_reverse_iterator rend() const {return this->c.rend();}

	typedef typename Container::reverse_iterator rbegin() {return this->c.rbegin();}
	typedef typename Container::reverse_iterator rend() {return this->c.rend();}
};
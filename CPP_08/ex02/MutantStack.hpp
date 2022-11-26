/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:59:51 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/25 16:19:56 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>

template<typename T, typename Container = std::deque<T>>
class MutantStack
{
private:
    // std::<container><type> MyStack;
public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack &other);
    MutantStack &operator=(const MutantStack &rhs);
    void push(T add);
    void pop(void);
    typename T::iterator begin();
    typename T::iterator end();
};
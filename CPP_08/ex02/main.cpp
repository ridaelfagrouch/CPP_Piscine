/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:59:57 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/26 11:58:11 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int, std::vector<int> > mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
    MutantStack<int, std::vector<int> >::iterator ite = mstack.end();

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int, std::vector<int> > s(mstack);
    return 0;
}
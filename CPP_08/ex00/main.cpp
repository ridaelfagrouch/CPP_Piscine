/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:07:58 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/24 22:40:55 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void processData(T &container, int find, std::string category, unsigned int &i)
{
    i++;
    srand((unsigned)time(NULL) + i);
    try
    {
        int random ;
        std::cout << category << ": ";
        for (int count = 0; count < 20; ++count)
        {
            random = (rand() % 21);
            container.push_back(random);
        }
        for (typename T::iterator i = container.begin(); i != container.end(); ++i)
            std::cout << *i << " " ;
        std::cout << "\n" << "find : " << find << "\n" << category << "first occurrenc " ;
        easyfind(container, find);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-------------------------" << std::endl;
}

int main()
{
    std::string test[] = {"vector ", "deque ", "list "};
    std::vector<int> vect;
    std::deque<int> dequ;
    std::list<int> lis;
    int find = 9;
    unsigned int i = 0;
    
    processData(vect, find, test[0], i);
    processData(dequ, find, test[1], i);
    processData(lis, find, test[2], i);
}
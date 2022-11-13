/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:16:17 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/13 10:55:06 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
// #include <stdlib.h>

int main()
{
    const Animal* array[10];

    for(int i = 0; i < 5; i++)
    {
        array[i] = new(std::nothrow) Dog();
        if (array[i] == NULL)
            exit(1);
        array[i + 5] = new(std::nothrow) Cat();
        if (array[i + 5] == NULL)
            exit(1);
    }

    for(int i = 0; i < 10; i++)
    {
        std::cout << "array "<< i + 1 << ": " << array[i]->getType() << std::endl;
        array[i]->makeSound();
        delete array[i];
    }
    // system("leaks I_don_t_want_to_set_the_world_on_fire");
}
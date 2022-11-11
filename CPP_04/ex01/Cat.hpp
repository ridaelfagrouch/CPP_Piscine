/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:19:14 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/11 17:42:37 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &rhs);
    void makeSound() const;
};
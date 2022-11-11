/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:16:14 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/11 17:50:30 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string);
    ~Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &rhs);
    virtual void makeSound() const;
    std::string getType() const;
};
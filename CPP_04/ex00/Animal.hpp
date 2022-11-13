/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:16:14 by rel-fagr          #+#    #+#             */
/*   Updated: 2022/11/13 10:48:43 by rel-fagr         ###   ########.fr       */
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
    virtual ~Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &rhs);
    virtual void makeSound() const;
    std::string getType() const;
};
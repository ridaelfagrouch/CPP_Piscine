/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:52:07 by garra             #+#    #+#             */
/*   Updated: 2022/11/12 11:05:21 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Brain
{
protected:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &other);
    Brain &operator=(const Brain &rhs);
};
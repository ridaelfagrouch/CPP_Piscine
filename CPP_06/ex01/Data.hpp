/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:24:54 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 10:06:33 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdint.h>

class Data {

    public:
        uintptr_t Test;
        std::string Name;
        Data();
        ~Data();
        Data(uintptr_t test, std::string name);
        Data(Data &other);
        Data    &operator=(const Data &rhs);
        uintptr_t serialize(Data *ptr);
        Data* deserialize(uintptr_t raw);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 00:24:54 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 00:48:22 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdint.h>

class Data {

    public:
        uintptr_t Test;
        Data();
        ~Data();
        Data(uintptr_t test);
        Data(Data &other);
        Data    &operator=(const Data &rhs);
        uintptr_t serialize(Data *ptr);
        Data* deserialize(uintptr_t raw);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:42 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 00:31:12 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
#include <limits>

enum Type {
   default_,
    Ninff_,
    Pinff_,
    nanf_
};

class Casts {

    private:
        std::string input;
        Type type;
        double data;
        void castChar(void);
        void castInt(void);
        void castFloat(void);
        void castDouble(void);

    public:
        std::string str;
        Casts();
        ~Casts();
        Casts(char *argv);
        Casts( Casts &obj);
        Casts& operator=(const Casts &obj);
        int getType(void);
        std::string& getInput(void);
        double getValue(void);
        void setValue(double D);
        void detectType(char *argv);
        void convertall();
        bool isNumber(std::string str);
};

std::ostream &operator<<( std::ostream & out, Casts &obj);

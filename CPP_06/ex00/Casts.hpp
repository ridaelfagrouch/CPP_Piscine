/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:42 by garra             #+#    #+#             */
/*   Updated: 2022/11/21 12:27:00 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
#include <limits>

enum Type {
   default_,
    Ninff,
    Pinff,
    nanf
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
        void checkDoubleFloatPseudo(char c);

    public:
        std::string str;
        Casts();
        ~Casts();
        Casts(char *av);
        Casts( Casts &other);
        Casts& operator=(const Casts &rhs);
        int getType(void);
        std::string& getInput(void);
        double getValue(void);
        void setValue(double D);
        void detectType(char *av);
        void convertall();
        bool isNumber(std::string str);
};

std::ostream &operator<<( std::ostream & out, Casts &obj);

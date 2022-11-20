/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:42 by garra             #+#    #+#             */
/*   Updated: 2022/11/20 21:45:04 by rel-fagr         ###   ########.fr       */
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
        Casts& operator=( Casts &obj);
        int getType(void);
        std::string& getInput(void);
        double getValue(void);
        void setValue(double D);
        void detectType(char *argv);
        void convertall();
        bool isNumber(std::string str);
};

std::ostream &operator<<( std::ostream & out, Casts &obj);

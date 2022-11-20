/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:42 by garra             #+#    #+#             */
/*   Updated: 2022/11/20 18:38:04 by rel-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>

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
        double value;
        // size_t  checkPoint;

    public:
    
        Casts();
        ~Casts();
        Casts(char *argv);
        Casts( Casts &obj);
        Casts& operator=( Casts &obj);

        int getType(void);
        std::string& getInput(void);
        double getValue(void);
        void setValue(double x);
        void detectType(char *argv);
        void castChar(void);
        void castInt(void);
        void castFloat(void);
        void castDouble(void);
};

std::ostream &operator<<( std::ostream & out, Casts &obj);

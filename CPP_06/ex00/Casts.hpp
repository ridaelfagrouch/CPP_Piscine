/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Casts.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garra <garra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:42:42 by garra             #+#    #+#             */
/*   Updated: 2022/11/20 14:56:35 by garra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cstdlib>

class Casts {

    private:

        std::string input;
        int type;
        double value;

    public:
    
        Casts();
        ~Casts();
        Casts(char *argv);
        Casts( Casts &conv);
        Casts& operator=( Casts &conv);

        void detectType(char *argv);
        void convChar(void);
        void convInt(void);
        void convFloat(void);
        void convDouble(void);

        // int getType(void);
        // std::string& getInput(void);
        // double getValue(void);
        // void setValue(double x);

};

std::ostream &operator<<( std::ostream & out, Casts &obj);

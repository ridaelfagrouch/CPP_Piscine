# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 06:29:45 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/27 06:33:06 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Fixed.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Fixed.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = My_First_Class_in_Orthodox_Canonical_Form

all : ${OFILES} 
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
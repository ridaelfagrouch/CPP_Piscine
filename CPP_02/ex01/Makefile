# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 03:17:42 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/28 03:18:14 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Fixed.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Fixed.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Towards_a_more_useful_fixed-point_number_class

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
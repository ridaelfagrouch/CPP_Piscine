# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 14:08:31 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/31 14:40:33 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Fixed.cpp Bsp.cpp Point.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER1 = Fixed.hpp
HEADER2 = Point.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = BSP

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER1} ${HEADER2}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
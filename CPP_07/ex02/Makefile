# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garra <garra@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 18:15:06 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/23 00:38:37 by garra            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Array.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Array

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
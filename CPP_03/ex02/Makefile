# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garra <garra@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 11:28:24 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/07 19:21:30 by garra            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp ClapTrap.cpp scavTrap.cpp FragTrap.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = ClapTrap.hpp
HEADER1 = scavTrap.hpp
HEADER2 = FragTrap.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Repetitive_work

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER1} ${HEADER2}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
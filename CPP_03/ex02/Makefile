# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 11:28:24 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/09 16:36:56 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = ClapTrap.hpp
HEADER1 = ScavTrap.hpp
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
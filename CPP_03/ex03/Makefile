# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 11:28:24 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/09 17:09:26 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = ClapTrap.hpp
HEADER1 = ScavTrap.hpp
HEADER2 = FragTrap.hpp
HEADER3 = DiamondTrap.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Now_it_s_weird!

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER1} ${HEADER2} ${HEADER3}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
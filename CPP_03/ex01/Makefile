# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garra <garra@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 11:28:24 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/07 19:28:20 by garra            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp ClapTrap.cpp ScavTrap.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = ClapTrap.hpp
HEADER1 = ScavTrap.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Serena_my_love

all : ${OFILES} 
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER1}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
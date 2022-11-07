# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 11:28:24 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/07 13:12:28 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp ClapTrap.cpp 
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = ClapTrap.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Aaaaand..._OPEN!

all : ${OFILES} 
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
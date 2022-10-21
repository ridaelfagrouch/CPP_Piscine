# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 02:19:46 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/22 00:08:05 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Zombie.cpp zombieHorde.cpp

OFILES = ${CFILES:.cpp=.opp}

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Moar_brainz

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
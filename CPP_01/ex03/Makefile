# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 00:38:29 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/22 00:06:31 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OFILES = ${CFILES:.cpp=.opp}

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Unnecessary_violence

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
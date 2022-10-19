# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 00:38:29 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/20 00:39:20 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OFILES = ${CFILES:.cpp=.opp}

CC = c++
W = -Wall -Werror -Wextra -std=c++98
NAME = Unnecessary_violence

all : ${OFILES}
	@${CC} ${W} ${CFILES} -o ${NAME}

%.opp:%.cpp
	@${CC} ${W} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
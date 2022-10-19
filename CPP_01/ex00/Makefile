# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 01:02:50 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/19 01:58:14 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Zombie.cpp newZombie.cpp ramdomChump.cpp
OFILES = ${CFILES:.cpp=.opp}

CC = c++
W = -Wall -Werror -Wextra -std=c++98
NAME = BraiiiiiiinnnzzzZ

all : ${OFILES}
	@${CC} ${W} ${CFILES} -o ${NAME}

%.opp:%.cpp
	@${CC} ${W} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all

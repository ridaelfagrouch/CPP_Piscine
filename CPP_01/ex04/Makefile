# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 05:02:10 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/20 05:28:36 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp

OFILES = ${CFILES:.cpp=.opp}

CC = c++
W = -Wall -Werror -Wextra -std=c++98
NAME = Sed_is_for_losers

all : ${OFILES}
	@${CC} ${W} ${CFILES} -o ${NAME}

%.opp:%.cpp
	@${CC} ${W} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
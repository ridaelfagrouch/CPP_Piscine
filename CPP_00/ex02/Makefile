# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 20:10:20 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/22 00:10:43 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = Account.cpp tests.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = The_Job_Of_Your_Dreams

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
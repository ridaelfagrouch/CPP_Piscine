# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garra <garra@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 00:25:01 by garra             #+#    #+#              #
#    Updated: 2022/11/21 00:35:25 by garra            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Data.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Data.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Serialization

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garra <garra@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 14:16:20 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/12 11:52:00 by garra            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Animal.cpp Cat.cpp Dog.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Animal.hpp
HEADER1 = Cat.hpp
HEADER2 = Dog.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Abstract_class

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER1} ${HEADER2}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
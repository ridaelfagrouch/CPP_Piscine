# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 14:16:20 by rel-fagr          #+#    #+#              #
#    Updated: 2022/11/11 14:21:19 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = 
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Animal.hpp
HEADER1 = Cta.hpp 
HEADER2 = Dog.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Polymorphism

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER1} ${HEADER2}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
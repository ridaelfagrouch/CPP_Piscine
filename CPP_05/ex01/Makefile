# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 23:07:55 by garra             #+#    #+#              #
#    Updated: 2022/11/15 12:02:07 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Bureaucrat.cpp Form.cpp
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Bureaucrat.hpp
HEADER1 = Form.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = Form_up_maggots

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER2}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all

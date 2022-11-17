# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: garra <garra@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 23:07:55 by garra             #+#    #+#              #
#    Updated: 2022/11/17 01:24:08 by garra            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp
		
OFILES = ${CFILES:.cpp=.opp}

CXX = c++
HEADER = Bureaucrat.hpp
HEADER1 = Form.hpp
HEADER2 = ShrubberyCreationForm.hpp
HEADER3 = RobotomyRequestForm.hpp
HEADER4 = PresidentialPardonForm.hpp
HEADER5 = Intern.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = At_least_this_beats_coffee-making

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all

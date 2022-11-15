# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 23:07:55 by garra             #+#    #+#              #
#    Updated: 2022/11/15 18:58:38 by rel-fagr         ###   ########.fr        #
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
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = No_you_need_form_28B_not_28C...

all : ${OFILES}
	@${CXX} ${CXXFLAGS} ${CFILES} -o ${NAME}

%.opp:%.cpp ${HEADER} ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4}
	@${CXX} ${CXXFLAGS} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all

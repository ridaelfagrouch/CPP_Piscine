# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fagr <rel-fagr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 15:08:19 by rel-fagr          #+#    #+#              #
#    Updated: 2022/10/13 22:25:45 by rel-fagr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFILES = MyAwesomePhoneBook.cpp phonebook.cpp contact.cpp
OFILES = ${CFILES:.cpp=.opp}

CC = g++
W = -Wall -Werror -Wextra -std=c++98
NAME = phonebook

all : ${OFILES}
	@${CC} ${W} ${CFILES} -o ${NAME}

%.opp:%.cpp 
	@${CC} ${W} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all
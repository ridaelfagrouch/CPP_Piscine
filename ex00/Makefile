CFILES = megaphone.cpp
OFILES = ${CFILES:.cpp=.opp}

CC = g++
W = -Wall -Werror -Wextra -std=c++98
NAME = megaphone

all : ${OFILES} ${INC}
	@${CC} ${W} ${CFILES} -o ${NAME}

%.opp:%.cpp
	@${CC} ${W} -o $@ -c $<

clean:
	@rm -f ${OFILES} ${OBONUS}

fclean : clean
	@rm -f ${NAME}

re : fclean all

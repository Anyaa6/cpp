# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ariane <ariane@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 09:37:47 by ariane            #+#    #+#              #
#    Updated: 2021/11/10 12:08:31 by ariane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= brainz

FILES			= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

INC_FILES		= Zombie.hpp
INC_PATH		= .
INC				= $(addprefix ${INC_PATH}/, ${INC_FILES})

SRC_PATH		= .
SRC				= $(addprefix ${SRC_PATH}/, ${FILES})

BIN_PATH		= bin
BIN				= $(SRC:%.cpp=$(BIN_PATH)/%.o)

CC				= clang++
RM				= rm -rf
FLAGS			= -std=c++98 -Wall -Wextra  -Werror

all:  			${NAME}

init:
				$(shell mkdir -p $(BIN_PATH))

#$(INC) permet de track hpp pour des changements
$(BIN): $(BIN_PATH)/%.o: %.cpp ${INC}
				$(CC) $(FLAGS) -c $< -o $@

${NAME}: 		init ${BIN}
				${CC} ${FLAGS} ${BIN} -I ${INC_PATH} -o ${NAME}

clean:
				${RM} ${BIN_PATH}			

fclean:			clean
				${RM} ${NAME}
				
re:				fclean all
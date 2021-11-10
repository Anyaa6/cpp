# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ariane <ariane@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 12:12:46 by ariane            #+#    #+#              #
#    Updated: 2021/11/10 17:44:31 by ariane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= addresses
FLAGS		= -Werror -Wall -Wextra -std=c++98

SRC 		= main.cpp
OBJ 		= $(SRC:.cpp=.o)

%.o: %.c
	clang++ $(FLAGS) $@ -c $< -I.

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
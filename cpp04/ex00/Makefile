# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ariane <ariane@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 12:12:46 by ariane            #+#    #+#              #
#    Updated: 2021/12/07 14:55:31 by ariane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	AnimalFarm

HEADER		=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
SRCS		=	Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

CC			=	clang++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98

OBJS		=	$(SRCS:.cpp=.o)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		
all:	$(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
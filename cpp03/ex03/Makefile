# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 12:12:46 by ariane            #+#    #+#              #
#    Updated: 2021/12/03 17:36:01 by abonnel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap

HEADER		=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
SRCS		=	ClapTrap.cpp main.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

CC			=	clang++
CFLAGS		=	-Wall -Werror -Wextra -Wshadow -std=c++98

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
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 12:12:46 by ariane            #+#    #+#              #
#    Updated: 2021/11/17 12:51:24 by abonnel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp 

OBJS	= $(SRCS:.cpp=.o)

NAME	= replace

CC		= clang++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

.cpp.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(SRCS) -I. -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) files/*.replace

re:			fclean all

.PHONY:		all clean fclean re
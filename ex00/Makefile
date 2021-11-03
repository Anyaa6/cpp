# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abonnel <abonnel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/29 10:45:55 by abonnel           #+#    #+#              #
#    Updated: 2021/11/03 10:37:22 by abonnel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp

OBJS	= $(SRCS:.c=.o)

NAME	= megaphone

CC		= g++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	#$(OBJS)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
			
all:		$(NAME)

clean:
			$(RM) $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re

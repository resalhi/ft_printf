# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 18:45:47 by ressalhi          #+#    #+#              #
#    Updated: 2021/11/27 15:37:01 by ressalhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
SRCS = ft_printf.c ft_functions.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)
$(OBJS) :
		$(CC) $(CFLAGS) -c $(SRCS)
clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

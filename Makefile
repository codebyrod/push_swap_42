# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 05:24:57 by rosousa-          #+#    #+#              #
#    Updated: 2026/01/20 15:13:15 by rosousa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra -g
# NAME = push_swap.a
NAME = push_swap

SRC = \
	case_base_five.c \
	case.c \
	exit.c \
	free.c \
	main.c \
	node.c \
	parsing_num.c \
	parsing_str.c \
	push.c \
	radix.c \
	reverse_rotate.c \
	rotate.c \
	split.c \
	swap.c \
	utils_node.c \
	utils.c \

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
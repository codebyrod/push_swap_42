# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/18 05:24:57 by rosousa-          #+#    #+#              #
#    Updated: 2026/01/21 00:59:45 by rosousa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g -I.
NAME = push_swap

SRC = \
	free/exit.c \
	free/free.c \
	movements/push.c \
	movements/reverse_rotate.c \
	movements/rotate.c \
	movements/swap.c \
	parsing/parsing_num.c \
	parsing/parsing_str.c \
	sort/case_base_five.c \
	sort/case.c \
	sort/node.c \
	sort/radix.c \
	utils/split.c \
	utils/utils_node.c \
	utils/utils.c \
	main.c \

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
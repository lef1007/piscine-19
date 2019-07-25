# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marandre <marandre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/21 18:51:31 by marandre          #+#    #+#              #
#    Updated: 2019/07/23 09:41:05 by marandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= ft_hexdump
SRCS			= srcs/main.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_strcat.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_print_memory.c srcs/ft_error.c srcs/ft_utils.c
CC				= gcc
FLAGS			= -Wall -Wextra -Werror
OBJ				= $(addprefix $(SRCDIR), $(SRCS:.c=.o))
SRCDIR			= ./
INCDIR			= ./

all: $(NAME)

$(SRCDIR)%.o:$(SRCDIR)%.c
	$(CC) $(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: fclean all
		./ft_hexdump -C files/a.txt files/b.txt;
		hexdump -C files/a.txt files/b.txt;

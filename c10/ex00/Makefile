# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marandre <marandre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/11 09:44:51 by marandre          #+#    #+#              #
#    Updated: 2019/07/11 16:40:03 by marandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
PATH_SRC = ./srcs/
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror
OPTIONS = -I $(HEADER)
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_display_file.c
OBJ = $(PATH_SRC)ft_putchar.o $(PATH_SRC)ft_putstr.o $(PATH_SRC)ft_display_file.o

all: $(NAME)

$(NAME) :
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)ft_putchar.c -o $(PATH_SRC)ft_putchar.o
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)ft_putstr.c -o $(PATH_SRC)ft_putstr.o
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)ft_display_file.c -o $(PATH_SRC)ft_display_file.o
	gcc $(FLAGS) $(OPTIONS) $(OBJ) -o ft_display_file

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
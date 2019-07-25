# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marandre <marandre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/13 22:51:15 by marandre          #+#    #+#              #
#    Updated: 2019/07/14 18:56:38 by marandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
PATH_SRC = ./srcs/
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror
OPTIONS = -I $(HEADER)
SRC = $(PATH_SRC)print.c $(PATH_SRC)doop.c $(PATH_SRC)error.c $(PATH_SRC)operation.c $(PATH_SRC)ft_atoi.c
OBJ = $(PATH_SRC)print.o $(PATH_SRC)doop.o $(PATH_SRC)error.o $(PATH_SRC)operation.o $(PATH_SRC)ft_atoi.o

all: $(NAME)

$(NAME) :
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)print.c -o $(PATH_SRC)print.o
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)error.c -o $(PATH_SRC)error.o
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)operation.c -o $(PATH_SRC)operation.o
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)ft_atoi.c -o $(PATH_SRC)ft_atoi.o
	gcc $(FLAGS) $(OPTIONS) -c $(PATH_SRC)doop.c -o $(PATH_SRC)doop.o
	gcc $(FLAGS) $(OPTIONS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
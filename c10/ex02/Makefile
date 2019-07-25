# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marandre <marandre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/12 19:18:27 by marandre          #+#    #+#              #
#    Updated: 2019/07/16 23:07:45 by marandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ft_tail
SRCS			= $(shell ls | grep -E "ft_.+\.c") \
				  readinput.c\
				  main.c \
				  tail_error.c
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

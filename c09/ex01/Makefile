# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marandre <marandre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/10 09:01:15 by marandre          #+#    #+#              #
#    Updated: 2019/07/12 13:03:15 by marandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libft.a
SRCS   = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
CC    = gcc
FLAGS   = -Wall -Wextra -Werror
OBJ    = $(addprefix $(SRCDIR), $(SRCS:.c=.o))
SRCDIR   = ./srcs/
INCDIR   = ./includes/

all:$(NAME)

$(SRCDIR)%.o:$(SRCDIR)%.c
	$(CC) $(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marandre <marandre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/17 23:13:16 by marandre          #+#    #+#              #
#    Updated: 2019/07/24 20:53:40 by marandre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CFLAGS = -I $(HEADER) -Wall -Wextra -Werror
SRCS = $(addprefix srcs/, main.c compute.c ft_atoi_len.c ft_convert.c ft_file_helpers.c ft_fun.c ft_helpers.c ft_mem.c ft_parse.c ft_str.c print_map.c readmap.c solver.c)
HEADER = includes/
OBJS = $(SRCS:.c=.o)

all: $(NAME) 

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean
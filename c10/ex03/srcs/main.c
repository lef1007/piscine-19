/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:51:20 by marandre          #+#    #+#             */
/*   Updated: 2019/07/23 10:54:19 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char *g_data;
int	g_size = 0;
int	g_good = 0;

void	set_size(int argc, char **argv, int i)
{
	char	buffer[BUF_SIZE + 1];
	int		fd;
	int		ret;

	while (i < argc)
	{
		fd = open(argv[i], O_RDWR);
		if (fd == -1)
			ft_error(argv, argc, i, g_good);
		else
		{
			g_good = 1;
			while ((ret = read(fd, buffer, BUF_SIZE)))
				g_size += ret;
		}
		i++;
	}
}

void	read_it(char **argv, int i, int argc)
{
	char	buffer[BUF_SIZE + 1];
	int		fd;
	int		ret;
	int		currsize;

	currsize = 0;
	while (i < argc)
	{
		fd = open(argv[i], O_RDWR);
		if (fd != -1)
		{
			while ((ret = read(fd, buffer, BUF_SIZE)))
			{
				ft_memcpy(g_data + currsize, buffer, ret);
				currsize += ret;
			}
		}
		close(fd);
		i++;
	}
}

void	ft_memcat_input(char *buff, char *filecontent, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		filecontent[i] = buff[i];
		i++;
	}
}

int		readinput(void)
{
	char			buf[BUF_SIZE + 1];
	int				ret;
	unsigned int	size;

	size = 0;
	errno = 0;
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		size += ret;
		if (!(g_data = malloc(size + 1)))
			return (0);
		size -= ret;
		ft_memcat_input(buf, g_data + size, ret);
		size += ret;
	}
	return (size);
}

int		main(int argc, char **argv)
{
	int i;
	int is_c;

	if (!(g_data = malloc(sizeof(char))))
		return (0);
	is_c = (argc > 1 && ft_strcmp(argv[1], "-C") == 0) ? 1 : 0;
	if (argc == 1 || (argc == 2 && ft_strcmp(argv[1], "-C") == 0))
	{
		g_size = readinput();
		ft_print_memory(g_data, g_size, is_c);
	}
	else
	{
		i = 1 + is_c;
		set_size(argc, argv, i);
		if (!(g_data = malloc(sizeof(char) * g_size + 1)))
			return (0);
		read_it(argv, i, argc);
		if (ft_strlen(g_data) > 0)
			ft_print_memory(g_data, g_size, is_c);
	}
	free(g_data);
	return (0);
}

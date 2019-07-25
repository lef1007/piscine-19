/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 01:47:01 by marandre          #+#    #+#             */
/*   Updated: 2019/07/13 16:46:07 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 1
#include <libgen.h>

void	display_file(int fd)
{
	int		ret;
	char	buf[BUF_SIZE];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

void	put_input(void)
{
	char	buf;

	while (read(0, &buf, 1))
		write(1, &buf, 1);
}

int		main(int ac, char **av)
{
	int		i;
	int		fd;

	if (ac < 2 || av[1][0] == '-')
		put_input();
	i = 1;
	while (i < ac)
	{
		errno = 0;
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr_fd(basename(av[0]), 2);
			ft_putstr_fd(": ", 2);
			ft_putstr_fd(av[i], 2);
			ft_putstr_fd(": ", 2);
			ft_putstr_fd(strerror(errno), 2);
			ft_putstr_fd("\n", 2);
		}
		else
			display_file(fd);
		close(fd);
		i++;
	}
	return (0);
}

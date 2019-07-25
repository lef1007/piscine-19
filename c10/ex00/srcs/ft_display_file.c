/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:00:39 by marandre          #+#    #+#             */
/*   Updated: 2019/07/13 02:12:58 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <fcntl.h>
#include "ft_ft.h"

int		print_content(char *filename)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(CANT_READ);
		return (1);
	}
	while ((ret = read(fd, buff, BUFF_SIZE)))
		write(1, buff, ret);
	if (close(fd) == 1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	char *filename;

	if (argc < 2)
		ft_putstr(TOO_FEW);
	else if (argc > 2)
		ft_putstr(TOO_MUCH);
	else
	{
		filename = argv[1];
		return (print_content(filename));
	}
	return (0);
}

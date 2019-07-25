/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:06:07 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 01:17:03 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*
** Get size of the file (char)
** @params :
** char *map -> map inside the char
** @return and int equals to the size of the char | used for malloc
*/

int		getsizeof(char *map)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE + 1];
	int		size;

	size = 0;
	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		if (ret == -1)
			return (0);
		size += ret;
	}
	close(fd);
	return (size);
}

/*
** Read and save all the content of the file into res
** @params :
** char *map -> filename
** int fd -> file descriptor
** @return char *res
*/

void	*throughfile(char *map, int fd)
{
	int		ret;

	if (!(g_mapped = malloc(sizeof(char*) * (getsizeof(map) + 1))))
		return (0);
	fd = open(map, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while ((ret = read(fd, g_mapped + g_inputsize, BUFF_SIZE)))
	{
		if (ret == -1)
			return (0);
		g_inputsize += ret;
	}
	close(fd);
	g_mapped[g_inputsize] = '\0';
	return (0);
}

/*
** Same goal as throughfile but for the stdin so no open/read
** here
*/

void	*throughfile_input(char *map)
{
	if (!(g_mapped = malloc(sizeof(char*) * (g_inputsize + 1))))
		return (0);
	g_mapped = ft_strcat(g_mapped, map);
	return (0);
}

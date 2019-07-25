/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readinput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 13:16:45 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 01:44:37 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

int		readinput(unsigned int offset)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	unsigned int	size;
	char			*filecontent;

	size = 0;
	errno = 0;
	while ((ret = read(0, buf, BUFF_SIZE)))
	{
		size += ret;
		if (!(filecontent = malloc(size + 1)))
			return (0);
		size -= ret;
		ft_memcat_input(buf, filecontent + size, ret);
		size += ret;
	}
	if (offset > size)
		offset = size;
	manstr(offset, filecontent + size - offset);
	return (0);
}

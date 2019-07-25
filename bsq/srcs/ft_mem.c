/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:24:45 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 09:02:31 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

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

void	*my_realloc(void *ptr, unsigned int originallength,
	unsigned int newlength)
{
	void *ptrnew;

	if (newlength == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(newlength));
	else if (newlength <= originallength)
		return (ptr);
	else
	{
		ptrnew = malloc(newlength);
		if (ptrnew)
		{
			ft_memcpy(ptrnew, ptr, originallength);
			free(ptr);
		}
		return (ptrnew);
	}
}

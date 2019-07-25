/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:34:21 by marandre          #+#    #+#             */
/*   Updated: 2019/07/12 08:52:14 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*stru;
	int				i;

	i = 0;
	if (!(stru = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		if (!(stru[i].size = (int)malloc(sizeof(int))))
			return (NULL);
		stru[i].size = ft_strlen(av[i]);
		if (!(stru[i].str = (char *)malloc(sizeof(char) * (stru[i].size + 1)))
				|| !(stru[i].copy = (char *)malloc(sizeof(char) *
				(stru[i].size + 1))))
			return (NULL);
		stru[i].copy = ft_strcpy(stru[i].str, av[i]);
		i++;
	}
	stru[i].str = NULL;
	stru[i].copy = NULL;
	return (stru);
}

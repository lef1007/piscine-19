/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 18:51:42 by marandre          #+#    #+#             */
/*   Updated: 2019/07/10 18:55:09 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calc_memory(int size, char **strs, char *sep)
{
	int i;
	int j;
	int m;

	m = 0;
	while (sep[m])
		m++;
	m *= size - 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			m++;
			j++;
		}
		i++;
	}
	if (m <= 0)
		return (0);
	m++;
	return (m);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		m;
	int		k;

	str = malloc(sizeof(char) * ft_calc_memory(size, strs, sep));
	if (size == 0)
		return (str);
	m = -1;
	i = -1;
	while (++i < size)
	{
		j = -1;
		k = -1;
		while (strs[i][++j])
			str[++m] = strs[i][j];
		while (sep[++k] && i < size - 1)
			str[++m] = sep[k];
	}
	str[++m] = '\0';
	return (str);
}

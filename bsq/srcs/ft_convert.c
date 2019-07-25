/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:14:27 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 01:15:09 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

short		**to_int(int nav, t_square square, int h, int l)
{
	short	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!h || !(tab = malloc(sizeof(int*) * h)))
		return (0);
	while (i < h)
	{
		j = 0;
		if (!(tab[i] = malloc(sizeof(int) * l)))
			return (0);
		while (j < l)
		{
			tab[i][j] = ((g_mapped + nav)[k++] == square.empty ? 0 : -1);
			j++;
		}
		i++;
		k++;
	}
	return (tab);
}

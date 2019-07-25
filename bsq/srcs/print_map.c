/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:23:00 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 01:35:58 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*
** printit will print the map with the correct square
** @params :
** int **mat -> table of table of int which is the matrix used
** t_square square -> the object we initialized before
** t_biggest big -> is where we have our biggest square found
*/

void	printit(t_square square, t_biggest big)
{
	int fx;
	int fy;
	int p;
	int k;

	p = 0;
	k = 1;
	fx = big.j + g_toskip;
	fy = big.i;
	while (p < big.h && p < big.value)
	{
		k = 1;
		while (k < big.l - big.j + 1 && k < big.value + 1)
		{
			g_mapped[(fx + k) + (big.l + 1) * (fy + p)] = square.full;
			k++;
		}
		p++;
	}
	write(1, g_mapped + g_toskip + 1, (big.l * big.h) + big.h);
}

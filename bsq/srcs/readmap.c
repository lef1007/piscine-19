/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:29:18 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 15:58:12 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int			readmap(int argc, char **argv, int i)
{
	int				h;
	int				l;
	short			**mat;
	t_square		square;
	t_biggest		big;

	while (++i < argc)
	{
		h = 0;
		l = 0;
		if ((mat = parse(argv[i], &square, &h, &l)))
		{
			solver(mat, h, l, &big);
			big.l = l;
			big.h = h;
			printit(square, big);
		}
		if (i != argc - 1)
			ft_putchar('\n');
		clear(mat, h);
	}
	return (0);
}

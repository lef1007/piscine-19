/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:15:30 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 14:13:32 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*
** Parse the data of the char *mat which is the map as plain txt
** @params :
** char *mat -> map as char
** t_square *square -> square object already defined
** int row -> explicit
** int col -> explicit
*/

short		**parse(char *mat, t_square *square, int *row, int *col)
{
	short	**map;
	int		li;
	int		nav;

	li = 0;
	nav = 0;
	throughfile(mat, 0);
	if (!g_mapped || checkmore(square, 0, 0, 0) != 1 || !(square->lines))
	{
		if (g_mapped)
			ft_putstr_fd("map error\n", 2);
		return (0);
	}
	*row = square->lines;
	while (g_mapped[li] && g_mapped[li] != '\n')
		li++;
	li++;
	nav = li;
	while (g_mapped[li++] != '\n')
		*col += 1;
	map = to_int(nav, *square, *row, *col);
	return (map);
}

/*
** Same as parse but for the stdin | only part modified is
** throughfile_input
*/

short		**parse_input(char *mat, t_square *square, int *row, int *col)
{
	short	**map;
	int		li;
	int		nav;

	li = 0;
	nav = 0;
	throughfile_input(mat);
	if (!g_mapped || checkmore(square, 0, 0, 0) != 1 || !(square->lines))
	{
		if (g_mapped)
			ft_putstr_fd("map error\n", 2);
		return (0);
	}
	*row = square->lines;
	while (g_mapped[li] && g_mapped[li] != '\n')
		li++;
	li++;
	nav = li;
	while (g_mapped[li++] != '\n')
		*col += 1;
	map = to_int(nav, *square, *row, *col);
	return (map);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:06:53 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 14:38:04 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*
** Fill in a t_square object like it should be
** @params :
** char *map_as_char -> explicit name
** square -> the object in which value should be placed
*/

int		give_square(char *map_as_char, t_square *square)
{
	int		nbr_char_first_line;

	square->lines = 0;
	while (map_as_char[square->lines] && map_as_char[square->lines] != '\n')
	{
		g_toskip++;
		square->lines++;
	}
	square->empty = map_as_char[square->lines - 3];
	square->obs = map_as_char[square->lines - 2];
	square->full = map_as_char[square->lines - 1];
	nbr_char_first_line = square->lines;
	square->lines = ft_atoi_len(map_as_char, square->lines - 3);
	return (nbr_char_first_line);
}

int		checkmore(t_square *square, int l, int li, int counter)
{
	int lone;
	int h;

	lone = 0;
	h = -1;
	li = give_square(g_mapped, square) - 1;
	while (g_mapped[++li])
	{
		if (g_mapped[li] == '\n')
		{
			if (lone && lone != l)
				return (0);
			lone = l;
			l = 0;
			h++;
		}
		if (!(g_mapped[li] == square->empty || g_mapped[li] == square->obs ||
			g_mapped[li] == '\n'))
			return (0);
		else if (g_mapped[li] == square->empty || g_mapped[li] == square->obs)
			counter++;
		l++;
	}
	return ((counter == 0 || h != square->lines) ? 0 : 1);
}

/*
** Empty and clear all our malloc to free memory
** @params :
** int **mat -> matrix of our data
** int row -> number of row
*/

void	clear(short **mat, int row)
{
	int i;

	i = 0;
	while (i < row)
		free(mat[i++]);
	free(mat);
	g_mapped[0] = '\0';
	free(g_mapped);
	g_inputsize = 0;
	g_toskip = 0;
}

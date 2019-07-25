/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:17:17 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 01:22:39 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		value(short **mat, int i, int j)
{
	int a;
	int b;
	int c;

	a = mat[i][j + 1];
	b = mat[i + 1][j];
	c = mat[i + 1][j + 1];
	if (a == -1 || b == -1 || c == -1)
		return (1);
	if (a != b)
		return ((a > b) ? b + 1 : a + 1);
	return ((a < c ? a + 1 : c + 1));
}

void	assign_big(short **mat, int i, int j, t_biggest *big)
{
	big->value = value(mat, i, j);
	mat[i][j] = big->value;
	if (big->value >= mat[big->i][big->j])
	{
		big->i = i;
		big->j = j;
	}
}

int		assign_big_limit(short **mat, t_biggest *big, int i, int j)
{
	big->value = 1;
	if (big->value >= mat[big->i][big->j])
	{
		big->i = i;
		big->j = j;
	}
	return (big->value);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:30:52 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 01:31:06 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

/*
** solver - solve the matrix and store the solution inside big
** @params :
** int **mat -> matrix of data
** int row -> explicit
** int col -> explicit
** t_biggest *big -> object to stock the biggest square found
*/

void	solver(short **mat, int row, int col, t_biggest *big)
{
	int i;
	int j;

	i = row - 1;
	big->i = i;
	big->j = col - 1;
	while (i >= 0)
	{
		j = col;
		while (--j >= 0)
		{
			if (mat[i][j] != -1)
			{
				if (i == row - 1 || j == col - 1)
					mat[i][j] = assign_big_limit(mat, big, i, j);
				else
					assign_big(mat, i, j, big);
			}
		}
		i--;
	}
	big->value = mat[big->i][big->j];
}

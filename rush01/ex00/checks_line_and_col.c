/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_line_and_col.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 03:30:51 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 16:23:03 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_column_downside(int *tab, int x, int size, int *param)
{
	int max;
	int count;
	int i;
	int col;

	i = size - 1;
	col = x % size;
	count = 0;
	max = 0;
	while (col + size * i >= col)
	{
		if (tab[size * i + col] > max)
		{
			max = tab[size * i + col];
			count++;
		}
		i--;
	}
	if (
		x + size >= size * size &&
		count != param[col + size])
		return (0);
	return (1);
}

int		check_col(int *tab, int x, int size, int *param)
{
	int max;
	int count;
	int	i;
	int	col;

	i = 0;
	col = x % size;
	count = 0;
	max = 0;
	while (size * i + col <= col + (size - 1) * size)
	{
		if (tab[size * i + col] > max)
		{
			max = tab[size * i + col];
			count++;
		}
		i++;
	}
	if ((x + size >= size * size && count != param[col]) ||
			!(check_column_downside(tab, x, size, param)))
		return (0);
	return (1);
}

int		check_line_rightside(int *tab, int x, int size, int *param)
{
	int line;
	int count;
	int i;
	int max;

	line = x / size * size;
	count = 0;
	i = size - 1;
	max = 0;
	while (line + i >= line)
	{
		if (tab[i + line] > max)
		{
			max = tab[i + line];
			count++;
		}
		i--;
	}
	if (!((x + 1) % size) && count != param[x / size + 3 * size])
		return (0);
	return (1);
}

int		check_line(int *tab, int x, int size, int *param)
{
	int i;
	int max;
	int count;
	int	line;

	i = 0;
	line = x / size * size;
	count = 0;
	max = 0;
	while (line + i <= line + size - 1)
	{
		if (tab[line + i] > max)
		{
			max = tab[i + line];
			count++;
		}
		i++;
	}
	if ((!((x + 1) % size) && count != param[x / size + 2 * size]) ||
			(!check_line_rightside(tab, x, size, param)))
		return (0);
	return (1);
}

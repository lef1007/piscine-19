/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 08:52:56 by marandre          #+#    #+#             */
/*   Updated: 2019/07/08 18:24:34 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 10

int g_queens_position[SIZE] = {-1};
int g_nbr_solution = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	long i;

	i = x;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

int		is_safe(int i)
{
	int j;

	j = 0;
	while ((g_queens_position[i] != g_queens_position[j])
		&& j < SIZE
		&& ((
			(g_queens_position[i] - g_queens_position[j]) < 0 ?
			-(g_queens_position[i] - g_queens_position[j]) :
			(g_queens_position[i] - g_queens_position[j])) != (i - j)))
		j++;
	return ((i == j) ? 1 : 0);
}

int		queens(int i)
{
	int cmpt;

	g_queens_position[i] = 0;
	while (g_queens_position[i] < SIZE)
	{
		if (is_safe(i))
		{
			if (i == SIZE - 1)
			{
				cmpt = 0;
				while (cmpt < SIZE)
				{
					ft_putchar(g_queens_position[cmpt] + '0');
					cmpt++;
				}
				ft_putchar('\n');
				g_nbr_solution++;
			}
			else
				queens(i + 1);
		}
		g_queens_position[i]++;
	}
	return (g_nbr_solution);
}

int		ft_ten_queens_puzzle(void)
{
	return (queens(0));
}

int main(void)
{
	ft_ten_queens_puzzle();
}
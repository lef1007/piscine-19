/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:54:52 by marandre          #+#    #+#             */
/*   Updated: 2019/07/06 15:08:30 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_horizontal(int x, int line)
{
	if (x >= 0)
		(line == 0) ? ft_putchar('A') : ft_putchar('C');
	while (x-- >= 2)
		ft_putchar('B');
	if (x == 0)
		(line == 0) ? ft_putchar('A') : ft_putchar('C');
	(x > 0) ? ft_putchar('\n') : 1;
}

void	print_vertical(int x, int y)
{
	int i;

	i = 0;
	(y > 1) ? ft_putchar('\n') : 1;
	while (y-- > 2)
	{
		ft_putchar('B');
		i = 2;
		while (x > i++)
			ft_putchar(' ');
		(x > 1) ? ft_putchar('B') : 1;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		print_horizontal(x - 1, 0);
	if (x >= 1)
		print_vertical(x, y);
	if (y >= 2)
		print_horizontal(x - 1, 1);
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

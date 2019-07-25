/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 10:14:12 by marandre          #+#    #+#             */
/*   Updated: 2019/07/08 11:30:41 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_horizontal(int x)
{
	(x >= 0) ? ft_putchar('o') : 1;
	while (x-- >= 2)
		ft_putchar('-');
	if (x == 0)
		ft_putchar('o');
	(x > 0) ? ft_putchar('\n') : 1;
}

void	print_vertical(int x, int y)
{
	int i;

	i = 0;
	(y > 1) ? ft_putchar('\n') : 1;
	while (y-- > 2)
	{
		ft_putchar('|');
		i = 2;
		while (x > i++)
			ft_putchar(' ');
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
		print_horizontal(x - 1);
	if (x >= 1)
		print_vertical(x, y);
	if (y >= 2)
		print_horizontal(x - 1);
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

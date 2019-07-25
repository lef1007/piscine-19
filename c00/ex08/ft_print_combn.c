/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 08:45:25 by marandre          #+#    #+#             */
/*   Updated: 2019/07/19 09:04:07 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_order(char *str)
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (str[x + 1])
	{
		y = x + 1;
		while (str[y])
		{
			if (str[x] <= str[y])
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

void	ft_putstring(char *str, int n, int *a)
{
	if (ft_is_order(str))
	{
		if (*a != 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		*a = 1;
		while (n-- > 0)
			ft_putchar(str[n]);
	}
}

void	ft_print_combn(int n)
{
	char	compt[n + 1];
	int		x;
	int		*a;
	int		b;

	b = 0;
	a = &b;
	x = -1;
	while (x++ < n - 1)
		compt[x] = '0';
	compt[x--] = 0;
	while (compt[x] && n > 0 && n < 10)
	{
		x = 0;
		while (compt[x] <= '9')
		{
			ft_putstring(compt, n, a);
			compt[x]++;
		}
		x--;
		while (compt[++x] >= '9')
			compt[x] = n - 1 - x + '0';
		if (compt[x])
			compt[x]++;
	}
}

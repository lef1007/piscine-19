/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 13:07:11 by marandre          #+#    #+#             */
/*   Updated: 2019/07/03 00:07:19 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

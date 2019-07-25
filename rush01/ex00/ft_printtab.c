/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:24:03 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 16:23:31 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int n);

void	ft_printtab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size * size)
	{
		ft_putnbr(tab[i++]);
		if (i % size == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}

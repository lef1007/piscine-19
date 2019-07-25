/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:33:55 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 19:14:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *tab;
	unsigned int i = 0;

	long a = start;
	long b = end;

	tab = malloc(sizeof(int));
	if (a > b)
	{
		while(a >= b)
		{
			tab[i] = b;
			i++;
			b++;
		}
	}
	else if (b > a)
	{
		while(b >= a)
		{
			tab[i] = b;
			i++;
			b--;
		}
	}
	else if (b == a)
	{
		tab[0] = a;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}


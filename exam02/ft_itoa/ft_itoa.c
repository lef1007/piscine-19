/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 18:07:43 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 19:24:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *res;
int currindex = 0;
int max = 0;

int		sizeofchar(int nbr)
{
	int count = 0;
	long i = nbr;
	if (i < 0)
	{
		i = i * -1;
		count++;
	}
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_putnbr(int nbr)
{
	long i = nbr;
	if (i < 0)
	{
		res[currindex] = '-';
		currindex++;
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else if(currindex < max)
	{
		res[currindex] = i + '0';
		currindex++;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	max = sizeofchar(nbr);

	if(!(res = (char *)malloc(sizeof(char) * max + 1)))
		return (0);
	res[max] = '\0';
	if (nbr == 0)
	{
		res[1] = '\0';
		res[0] = '0';
	}
	return (ft_putnbr(nbr));
}

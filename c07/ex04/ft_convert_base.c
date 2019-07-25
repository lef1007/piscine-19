/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 08:20:57 by marandre          #+#    #+#             */
/*   Updated: 2019/07/10 23:59:20 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base == 0)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			if ((base[j] >= 9 && base[j] <= 13) || base[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int		is_base(char c, char *base, int to, int max)
{
	int i;
	int res;

	i = 0;
	res = 0;
	if (to == 0)
	{
		while (base[i])
		{
			if (base[i] == c)
				return (1);
			i++;
		}
		return (res * max);
	}
	else
	{
		while (base[i] != c)
			i++;
	}
	return (res + i);
}

char	*dec_to_base(int nbr, char *base, char *res, int i)
{
	unsigned int max;
	unsigned int nb;

	max = check_base(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		res[0] = '-';
	}
	else
		nb = nbr;
	if (nb > max - 1)
		dec_to_base(nb / max, base, res, i - 1);
	res[i] = base[nb % max];
	return (res);
}

char	*malloc_n(int nbr, char *base)
{
	int				i;
	unsigned int	max;
	unsigned int	total;
	unsigned int	nb;
	char			*res;

	i = (nbr == 0) ? 1 : 0;
	total = 0;
	max = check_base(base);
	if (nbr < 0)
	{
		total++;
		nb = nbr * -1;
	}
	else
		nb = nbr;
	while (nb != 0)
	{
		nb = nb / max;
		i++;
	}
	total += i;
	res = (char*)malloc(sizeof(char) * total + 1);
	res[total] = '\0';
	return (dec_to_base(nbr, base, res, total - 1));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	int		max;
	int		res;

	sign = 0;
	max = check_base(base_from);
	res = 0;
	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign++;
		nbr++;
	}
	while (is_base(*nbr, base_from, 0, max) && *nbr)
	{
		res = res * max + is_base(*nbr, base_from, 10, max);
		nbr++;
	}
	sign = (sign % 2 == 1) ? -1 : 1;
	return (malloc_n(res * sign, base_to));
}

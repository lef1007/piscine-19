/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:45:57 by marandre          #+#    #+#             */
/*   Updated: 2019/07/10 12:18:54 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] == c)
		return (1);
	else
		return (0);
}

int		check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 9
			&& base[i] <= 13) || base[i] == ' ')
			return (1);
		while (base[i] != base[j] && base[j])
			j++;
		if (base[i] == base[j])
			return (1);
		i++;
	}
	return (0);
}

int		convert_to_dec(int nbr, char *base)
{
	int i;

	i = 0;
	while (base[i] != nbr)
		i++;
	return (i);
}

int		max_base(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int		ft_atoi_base(char *str, char *base)
{
	int res;
	int sign;
	int i;
	int max;

	res = 0;
	sign = 1;
	i = 0;
	max = max_base(base);
	if (check_base(base))
		return (0);
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' ||
		str[i] == '\v' || str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		(str[i] == '-') ? sign = -1 : 0;
		i++;
	}
	while (is_base(str[i], base) && str[i])
	{
		res = res * max + convert_to_dec(str[i], base);
		i++;
	}
	return (res * sign);
}

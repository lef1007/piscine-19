/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 17:39:19 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 18:05:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while(str[i])
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
					sign = -1;
			i++;
			if (str[i] == '-' || str[i] == '+')
				return (0);
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
		}
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}


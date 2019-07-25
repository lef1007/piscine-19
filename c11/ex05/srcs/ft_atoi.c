/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 23:12:47 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 21:51:26 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 0;
	i = 0;
	while (str[i] < 33)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		(str[i] == '-') ? sign++ : 0;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign % 2 == 1) ? res = res * (-1) : res;
}

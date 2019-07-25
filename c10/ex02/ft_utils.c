/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:17:22 by marandre          #+#    #+#             */
/*   Updated: 2019/07/16 17:21:41 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *s)
{
	int	res;
	int i;
	int neg;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\f' ||
			s[i] == '\r' || s[i] == '\v')
		i++;
	neg = 1;
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			neg = -neg;
		i++;
	}
	res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * neg);
}

int		ft_is_num(char c)
{
	return (c >= '0' && c <= '9');
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:51:20 by marandre          #+#    #+#             */
/*   Updated: 2019/07/21 19:47:01 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str)
{
	char *c;

	c = str;
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}

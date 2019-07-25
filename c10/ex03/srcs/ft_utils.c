/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:59:57 by marandre          #+#    #+#             */
/*   Updated: 2019/07/22 23:40:30 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putnbr_hex(int octet, int rem)
{
	char const *base = "0123456789abcdef";

	if (rem > 1)
		ft_putnbr_hex(octet / 16, rem - 1);
	write(1, base + (octet % 16), 1);
}

void	ft_print_space(int is_c)
{
	ft_putchar(' ');
	if (is_c)
		ft_putchar(' ');
}

void	ft_print_space_hex(int a, int is_c)
{
	if (a == 7 && is_c)
		ft_putchar(' ');
	if (a < 15)
		ft_putchar(' ');
}

void	ft_memcpy(void *dest, void *src, int n)
{
	int		i;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
}

void	ft_mempstr(char *str, int lenght)
{
	int	i;

	i = -1;
	while (i++ < lenght)
		ft_putchar(str[i]);
}

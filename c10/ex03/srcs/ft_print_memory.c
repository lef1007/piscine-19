/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:51:20 by marandre          #+#    #+#             */
/*   Updated: 2019/07/22 23:00:45 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		g_space = 0;
int		g_is_space = 0;

int		ft_print_it(int i, int size, unsigned char const *ptr, int is_c)
{
	int a;

	a = 0;
	while (a < 16 && a + i < size)
	{
		if (ptr[i + a] == ptr[i])
			g_is_space++;
		a++;
	}
	if (g_is_space != 16 || g_space == 0)
	{
		ft_putnbr_hex(i, 7 + is_c);
		ft_print_space(is_c);
	}
	a = 0;
	return (a);
}

int		ft_print_all(unsigned int size, int is_c,
	int i, unsigned char const *ptr)
{
	unsigned int	a;

	g_is_space = 0;
	a = ft_print_it(i, size, ptr, is_c);
	while (a < 16 && a + i < size)
	{
		if (g_is_space != 16 || g_space == 0)
		{
			ft_putnbr_hex(*(ptr + i + a), 2);
			ft_print_space_hex(a, is_c);
		}
		else if (g_space != 2)
		{
			ft_putstr("*\n");
			break ;
		}
		a++;
	}
	while (a < 16 && g_space == 0)
	{
		ft_putstr("  ");
		ft_print_space_hex(a, is_c);
		a++;
	}
	return ((g_is_space == 16) ? g_is_space : 0);
}

void	print_ifc(int is_c, int size, unsigned char const *ptr, int i)
{
	int a;

	a = 0;
	ft_print_space(is_c);
	ft_putchar('|');
	while (a < 16 && a + i < size)
	{
		ft_putchar_mem(ptr + a + i);
		a++;
	}
	ft_putchar('|');
}

void	check_g_space(int is_space)
{
	if (is_space == 16 && g_space == 0)
		g_space = 1;
	else if (is_space == 16 && g_space == 1)
		g_space = 2;
	else if (is_space != 16)
		g_space = 0;
}

void	ft_print_memory(const void *addr, unsigned int size, int is_c)
{
	unsigned int		i;
	unsigned char const *ptr = addr;
	int					is_space;

	i = 0;
	while (i < size)
	{
		is_space = ft_print_all(size, is_c, i, ptr);
		if (!is_space || g_space == 0)
			if (is_c)
			{
				print_ifc(is_c, size, ptr, i);
			}
		check_g_space(is_space);
		if (g_space != 2)
			ft_putchar('\n');
		i += 16;
	}
	ft_putnbr_hex(size, 7 + is_c);
	ft_putchar('\n');
}

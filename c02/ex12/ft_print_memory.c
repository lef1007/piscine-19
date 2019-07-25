/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:05:53 by marandre          #+#    #+#             */
/*   Updated: 2019/07/21 19:03:53 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*(str) != '\0')
		ft_putchar(*str++);
}

void	ft_put_mem(void *addr, char *b)
{
	int					i;
	unsigned long long	nb;
	char				s[16];

	nb = (unsigned long long)addr;
	i = 14;
	while (i >= 0)
	{
		s[i] = b[nb % 16];
		i--;
		nb = nb / 16;
	}
	s[15] = '\0';
	ft_putstr(s);
	ft_putstr(": ");
}

void	ft_putnbr_hex(int nb, int j)
{
	char				*b;

	b = "0123456789abcdef";
	ft_putchar(b[nb / 16]);
	ft_putchar(b[nb % 16]);
	if (j % 2)
		ft_putchar(' ');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	char				*s;
	unsigned int		j;

	i = 0;
	if (size == 0)
		return (addr);
	s = (char *)addr;
	while (i < size)
	{
		j = -1;
		ft_put_mem(addr + i, "0123456789abcdef");
		while (++j < 16 && i + j < size)
		{
			ft_putnbr_hex((unsigned char)s[i + j], j);
		}
		while (j++ < 16)
			ft_putstr(j % 2 ? "  " : "   ");
		j = -1;
		while (++j < 16 && i + j < size)
			ft_putchar((s[i + j] >= 32 && s[i + j] < 127) ? s[i + j] : '.');
		i = i + 16;
		ft_putstr("\n");
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:47:00 by marandre          #+#    #+#             */
/*   Updated: 2019/07/07 17:54:06 by marandre         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (i > 1)
	{
		ft_putstr(argv[i - 1]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}

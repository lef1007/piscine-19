/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 17:09:09 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 17:20:06 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] = argv[1][i] - ('a' - 'A');
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] = argv[1][i] + ('a' - 'A');
			}
			i++;
		}
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
}

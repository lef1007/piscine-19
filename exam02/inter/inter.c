/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 17:21:59 by exam              #+#    #+#             */
/*   Updated: 2019/07/19 17:37:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count = -1;
char already[100];

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

int		checkifalreadyseen(char c)
{
	int i = 0;
	while (already[i])
	{
		if (already[i] == c)
			return (1);
		else
			i++;
	}
	return (0);	
}

int		main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char *first;
	char *second;

	if (argc != 3)
	{
		ft_putchar('\n');
		return (1);
	}
	else
	{
		first = argv[1];
		second = argv[2];	
		while (first[i])
		{
			j = 0;
			while(second[j])
			{
				if(first[i] == second[j] && !checkifalreadyseen(first[i]))
				{
					count++;
					already[count] = first[i];
					ft_putchar(first[i]);
				}
				j++;
			}
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}

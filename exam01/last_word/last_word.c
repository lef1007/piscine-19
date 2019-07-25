/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 17:52:34 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 18:32:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *g_str;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *c)
{
	int i = 0;
	
	while(c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

int find(char *str)
{
	char *resp = str;
	while(*str != '\0')
	{
		if (*str == ' ' || *str == '\t')
		{
			str++;
			find(str);
			return (0);
		}
		str++;
	}
	ft_putstr(resp);
	ft_putchar('\n');	
	return (1);
}

int	main(int argc, char **argv)
{
	char *str;
	if (argc == 2)
	{
		str = argv[1];
		return (find(str));
	}
	else
	{
		ft_putchar('\n');
	}
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:09:40 by marandre          #+#    #+#             */
/*   Updated: 2019/07/16 23:19:56 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	display_name(char *s)
{
	ft_putstr("==> ");
	ft_putstr(s);
	ft_putstr(" <==\n");
}

void	manstr(int lenght, char *str)
{
	int i;

	i = 0;
	while (i < lenght)
	{
		ft_putchar(str[i]);
		i++;
	}
}

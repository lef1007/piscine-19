/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:19:39 by marandre          #+#    #+#             */
/*   Updated: 2019/07/16 17:08:47 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_str_is_num(char *s)
{
	while (*s)
		if (!ft_is_num(*s++))
			return (0);
	return (1);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (res);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

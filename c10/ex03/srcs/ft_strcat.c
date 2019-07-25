/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:51:20 by marandre          #+#    #+#             */
/*   Updated: 2019/07/21 20:34:02 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_strcat(char *dest, char *src)
{
	char	*comb;
	int		i;
	int		j;

	comb = (char*)malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) + 1));
	i = 0;
	while (dest[i])
	{
		comb[i] = dest[i];
		i++;
	}
	j = 0;
	while (src[j])
	{
		comb[i] = src[j];
		i++;
		j++;
	}
	comb[i] = '\0';
	return (comb);
}

char	*ft_strcatch(char *dest, char src)
{
	char	*comb;
	int		i;

	comb = (char*)malloc(sizeof(char) * (ft_strlen(dest) + 1 + 1));
	i = 0;
	while (dest[i])
	{
		comb[i] = dest[i];
		i++;
	}
	comb[i] = src;
	comb[i + 1] = '\0';
	return (comb);
}

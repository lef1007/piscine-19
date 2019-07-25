/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 01:51:35 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 16:26:28 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *s);
int		ft_is_whitespace(char c);

int		*ft_parse(char *s, int size)
{
	int		i;
	int		j;
	int		*param;

	if (!(param = (int *)malloc(sizeof(int) * size * size)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (ft_is_whitespace(s[i]))
			i++;
		if (s[i])
		{
			param[j++] = ft_atoi(s + i);
		}
		while (s[i] && !ft_is_whitespace(s[i]))
			i++;
	}
	if (j < 4 * size)
	{
		free(param);
		return (NULL);
	}
	return (param);
}

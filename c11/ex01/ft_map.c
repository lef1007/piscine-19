/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:21:01 by marandre          #+#    #+#             */
/*   Updated: 2019/07/13 22:23:13 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	i = 0;
	arr = malloc(sizeof(int) * length);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

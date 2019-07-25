/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:04:29 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 11:10:57 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*start;
	t_list	*list;

	if (size == 0)
		return (NULL);
	i = 1;
	start = ft_create_elem(strs[size - i++]);
	list = start;
	while (size - i >= 0)
	{
		list->next = ft_create_elem(strs[size - i++]);
		list = list->next;
	}
	return (start);
}

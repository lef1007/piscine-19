/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:47:56 by marandre          #+#    #+#             */
/*   Updated: 2019/07/15 00:57:05 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *new;
	t_list *list;

	new = ft_create_elem(data);
	list = (*begin_list);
	if (!(*begin_list) || cmp(new->data, list->data) <= 0)
	{
		new->next = list;
		*begin_list = new;
		return ;
	}
	while (list->next && cmp(new->data, list->next->data) > 0)
	{
		list = list->next;
	}
	new->next = list->next;
	list->next = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:27:07 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 16:32:13 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_insert(t_list **list, t_list *element, int (*cmp)())
{
	t_list *temp;

	temp = *list;
	while (cmp(element->data, temp->data) < 0)
	{
		element->next = temp;
		*list = element;
		return ;
	}
	while (temp)
	{
		if (!temp->next || cmp(element->data, temp->next->data) < 0)
		{
			element->next = temp->next;
			temp->next = element;
			return ;
		}
		temp = temp->next;
	}
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list;
	t_list *temp;
	t_list *scdtemp;

	if (!(*begin_list))
		return ;
	list = *begin_list;
	temp = list->next;
	list->next = NULL;
	while (temp)
	{
		scdtemp = temp->next;
		ft_list_insert(&list, temp, cmp);
		temp = scdtemp;
	}
	*begin_list = list;
}

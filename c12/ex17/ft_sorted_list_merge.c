/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:58:42 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 10:44:39 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	ft_list_sort_2(t_list **begin_list, int (*cmp)())
{
	t_list	*list;
	t_list	*search;
	void	*tmpval;

	list = *begin_list;
	if (!list)
		return ;
	while (list->next)
	{
		search = list->next;
		while (search)
		{
			if (cmp(list->data, search->data) > 0)
			{
				tmpval = list->data;
				list->data = search->data;
				search->data = tmpval;
			}
			search = search->next;
		}
		list = list->next;
	}
}

static void	ft_list_merge_2(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*tmp;

	tmp = *begin_list1;
	if (!tmp)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = begin_list2;
}

void		ft_sorted_list_merge(t_list **begin_list1,
	t_list *begin_list2, int (*cmp)())
{
	if (!(*begin_list1))
		*begin_list1 = begin_list2;
	if (!(*begin_list1))
		return ;
	ft_list_merge_2(begin_list1, begin_list2);
	ft_list_sort_2(begin_list1, cmp);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:20:14 by marandre          #+#    #+#             */
/*   Updated: 2019/07/15 00:23:04 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *curr;

	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	curr = *begin_list1;
	while (curr && curr->next)
		curr = curr->next;
	curr->next = begin_list2;
}

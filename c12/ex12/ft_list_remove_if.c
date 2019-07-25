/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:06:35 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 11:07:33 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
						int (*cmp)(), void (*free_fct)(void *))
{
	t_list *now;
	t_list *temp;
	t_list *to_delete;

	temp = 0;
	now = *begin_list;
	while (now)
	{
		if (!cmp(now->data, data_ref))
		{
			if (!temp)
				*begin_list = now->next;
			else
				temp->next = now->next;
			to_delete = now;
			now = now->next;
			free_fct(to_delete->data);
			free(to_delete);
		}
		else
		{
			temp = now;
			now = now->next;
		}
	}
}

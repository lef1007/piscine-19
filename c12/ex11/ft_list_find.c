/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:03:51 by marandre          #+#    #+#             */
/*   Updated: 2019/07/15 00:05:58 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (!cmp(begin_list->data, data_ref))
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}

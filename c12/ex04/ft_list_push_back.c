/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:54:29 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 16:12:45 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if (((*begin_list)->next))
			ft_list_push_back(&((*begin_list)->next), data);
		else
			((*begin_list)->next) = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}

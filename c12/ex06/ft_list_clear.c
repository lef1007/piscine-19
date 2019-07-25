/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:20:48 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 11:10:56 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *temp;
	t_list *swap;

	temp = begin_list;
	swap = NULL;
	while (temp)
	{
		swap = temp->next;
		free_fct(temp->data);
		free(temp);
		temp = swap;
	}
}

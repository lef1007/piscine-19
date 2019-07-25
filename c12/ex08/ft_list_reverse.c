/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:33:39 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 11:09:43 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *temp;
	t_list *n;
	t_list *p;

	p = 0;
	n = 0;
	temp = *begin_list;
	while (temp)
	{
		n = temp->next;
		temp->next = p;
		p = temp;
		temp = n;
	}
	*begin_list = p;
}

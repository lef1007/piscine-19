/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 00:34:56 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 21:06:47 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_at(t_list *begin_list, unsigned int nb)
{
	unsigned int i;

	i = 0;
	while (begin_list)
	{
		i++;
		if (i == nb)
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (NULL);
}

int		ft_size(t_list *begin_list)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = begin_list;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		j;
	void	*t;
	t_list	*temp;
	t_list	*curr;

	curr = begin_list;
	j = ft_size(begin_list);
	i = 0;
	while (i < j)
	{
		temp = ft_at(begin_list, j);
		t = curr->data;
		curr->data = temp->data;
		temp->data = t;
		i++;
		j--;
		curr = curr->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:15:03 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 12:00:47 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = begin_list;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:27:07 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 11:10:28 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!(begin_list))
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	return (ft_list_at(begin_list->next, nbr - 1));
}

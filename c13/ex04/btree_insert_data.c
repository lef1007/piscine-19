/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:30:08 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 10:03:21 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) > 0)
	{
		btree_insert_data(&(*root)->left, item, cmpf);
	}
	else
	{
		btree_insert_data(&(*root)->right, item, cmpf);
	}
}

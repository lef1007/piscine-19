/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:47:41 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 10:02:23 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	if (!(node = malloc(sizeof(t_btree))))
		return (NULL);
	node->item = item;
	node->right = NULL;
	node->left = NULL;
	return (node);
}

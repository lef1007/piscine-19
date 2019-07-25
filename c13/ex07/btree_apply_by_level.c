/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 09:01:36 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 22:06:54 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_level	*btree_create_node_at(t_btree *old, int level)
{
	t_level *node;

	if (!(node = malloc(sizeof(t_level))))
		return (NULL);
	node->item = old->item;
	node->level = level;
	node->is_first = 1;
	node->next = NULL;
	return (node);
}

t_level	*populate(t_level *list, t_btree *root, int level)
{
	t_level *temp;
	t_level *new;

	if (!root)
		return (NULL);
	new = btree_create_node_at(root, level);
	temp = list;
	if (!temp)
		list = new;
	else
	{
		while (temp->next && temp->next->level <= level)
			temp = temp->next;
		new->next = temp->next;
		temp->next = new;
		if (temp->level == level)
			new->is_first = 0;
	}
	populate(list, root->left, level + 1);
	populate(list, root->right, level + 1);
	return (list);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)
	(void *item, int current_level, int is_first_elem))
{
	t_level *list;

	list = NULL;
	list = populate(list, root, 0);
	while (list)
	{
		applyf(list->item, list->level, list->is_first);
		list = list->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 08:52:55 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 10:05:49 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int left;
	int right;

	if (!root)
		return (0);
	left = 1 + btree_level_count(root->left);
	right = 1 + btree_level_count(root->right);
	return (left > right ? left : right);
}

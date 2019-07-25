/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:39:07 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 10:03:09 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BTREE_H
# define _FT_BTREE_H
# include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

typedef struct		s_level
{
	void			*item;
	int				is_first;
	int				level;
	struct s_level	*next;
}					t_level;

t_btree				*btree_create_node(void *item);
#endif

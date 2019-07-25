/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:39:07 by marandre          #+#    #+#             */
/*   Updated: 2019/07/18 10:02:08 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BTREE_H
# define _FT_BTREE_H

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 09:40:17 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 11:09:30 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_LIST_H
# define _FT_LIST_H

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

#endif

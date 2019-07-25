/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:03:07 by marandre          #+#    #+#             */
/*   Updated: 2019/07/11 00:14:55 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_BOOLEAN_H
# define _FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(x) x % 2 == 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

typedef	int		t_bool;
#endif

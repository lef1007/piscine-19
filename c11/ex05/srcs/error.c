/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:11:09 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 21:51:20 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ft.h"

int	throw_div_error(void)
{
	ft_putstr("Stop : division by zero\n");
	return (0);
}

int	throw_mod_error(void)
{
	ft_putstr("Stop : modulo by zero\n");
	return (0);
}

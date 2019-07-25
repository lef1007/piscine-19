/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tail_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 19:25:15 by marandre          #+#    #+#             */
/*   Updated: 2019/07/16 19:16:39 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <libgen.h>

void	display_error_tail(char **av, int err, int i)
{
	ft_putstr_fd(basename(av[0]), 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(av[i], 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(strerror(err), 2);
	ft_putstr_fd("\n", 2);
}

void	offset_error(char **av)
{
	ft_putstr_fd(basename(av[0]), 2);
	ft_putstr_fd(": illegal offset -- ", 2);
	ft_putstr_fd(av[2], 2);
	ft_putstr_fd("\n", 2);
}

void	display_usage_tail(char **av)
{
	ft_putstr_fd(basename(av[0]), 2);
	ft_putstr_fd(": option requires an argument -- c\nusage: ./", 2);
	ft_putstr_fd(basename(av[0]), 2);
	ft_putstr_fd(" [-F ", 2);
	ft_putstr_fd("| -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n", 2);
}

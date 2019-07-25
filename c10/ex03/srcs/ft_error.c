/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:51:20 by marandre          #+#    #+#             */
/*   Updated: 2019/07/22 23:10:50 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	add_error(int i, int argc, int good, char **argv)
{
	if (i == argc - 1 && good == 0)
	{
		ft_putstr_fd(basename(argv[0]), STDERR_FILENO);
		ft_putstr_fd(": ", STDERR_FILENO);
		ft_putstr_fd(argv[i], STDERR_FILENO);
		ft_putstr_fd(": Bad file descriptor\n", STDERR_FILENO);
	}
}

void	ft_error(char **argv, int argc, int i, int good)
{
	if (errno == EACCES)
	{
		ft_putstr_fd(basename(argv[0]), STDERR_FILENO);
		ft_putstr_fd(": ", STDERR_FILENO);
		ft_putstr_fd(argv[i], STDERR_FILENO);
		ft_putstr_fd(": Permission Denied\n", STDERR_FILENO);
	}
	else if (errno == EISDIR)
	{
		ft_putstr_fd(basename(argv[0]), STDERR_FILENO);
		ft_putstr_fd(": ", STDERR_FILENO);
		ft_putstr_fd(argv[i], STDERR_FILENO);
		ft_putstr_fd(": Is a directory\n", STDERR_FILENO);
	}
	else
	{
		ft_putstr_fd(basename(argv[0]), STDERR_FILENO);
		ft_putstr_fd(": ", STDERR_FILENO);
		ft_putstr_fd(argv[i], STDERR_FILENO);
		ft_putstr_fd(": No such file or directory\n", STDERR_FILENO);
		add_error(i, argc, good, argv);
	}
}

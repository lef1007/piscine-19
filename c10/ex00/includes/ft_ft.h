/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:03:35 by marandre          #+#    #+#             */
/*   Updated: 2019/07/13 02:12:56 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_FT_H
# define _FT_FT_H
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
# define TOO_FEW "File name missing.\n"
# define TOO_MUCH "Too many arguments.\n"
# define CANT_READ "Cannot read file.\n"
# define BUFF_SIZE 4096
#endif

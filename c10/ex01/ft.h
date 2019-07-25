/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 21:15:26 by marandre          #+#    #+#             */
/*   Updated: 2019/07/13 16:45:22 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <string.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int n);
int		ft_atoi(char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif

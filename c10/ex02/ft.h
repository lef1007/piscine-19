/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:25:15 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 01:45:12 by marandre         ###   ########.fr       */
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
# include <stdlib.h>
# include <stdio.h>
# define MEM_K 32768
# define BUFF_SIZE MEM_K

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int n);
int		ft_atoi(char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_is_num(char c);
int		ft_str_is_num(char *s);
void	display_usage_tail(char **av);
void	display_error_tail(char **s, int err, int i);
void	offset_error(char **av);
int		readinput(unsigned int offset);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strcpy(char *s1, char *s2);
void	display_name(char *s);
void	manstr(int lenght, char *str);

#endif

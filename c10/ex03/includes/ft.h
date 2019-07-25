/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 18:51:20 by marandre          #+#    #+#             */
/*   Updated: 2019/07/23 09:41:03 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdlib.h>
# include <libgen.h>
# include <stdio.h>
# define BUF_SIZE 32768

void	ft_putstr(char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar(char c);
void	ft_error(char **argv, int argc, int i, int good);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
void	ft_print_memory(const void *addr, unsigned int size, int is_c);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar_mem(unsigned char const *ptr);
void	ft_putnbr_hex(int octet, int rem);
void	ft_print_space(int is_c);
void	ft_print_space_hex(int a, int is_c);
void	ft_memcpy(void *dest, void *src, int n);
void	ft_mempstr(char *str, int lenght);
#endif

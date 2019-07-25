/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:56:32 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 21:52:25 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_FT_H
# define _FT_FT_H

# include <unistd.h>

typedef int	(*t_op_functions)(int, int);

int		ft_atoi(char *str);
int		add(int a, int b);
int		mul(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		throw_div_error(void);
int		throw_mod_error(void);
#endif

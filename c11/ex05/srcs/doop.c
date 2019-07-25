/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:48:37 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 21:56:09 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ft.h"

int		main(int argc, char **argv)
{
	int						i;
	char					c;
	char const				*op = "+-*/%\0";
	t_op_functions const	func_arr[] = {add, sub, mul, div, mod};

	if (argc != 4)
		return (0);
	c = argv[2][0];
	i = -1;
	if (c == '/' && !ft_atoi(argv[3]))
		return (throw_div_error());
	if (c == '%' && !ft_atoi(argv[3]))
		return (throw_mod_error());
	while (op[++i])
	{
		if (op[i] == c)
		{
			ft_putnbr(func_arr[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
			return (0);
		}
	}
	ft_putstr("0\n");
	return (0);
}

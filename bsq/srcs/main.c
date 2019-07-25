/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 23:16:07 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 10:10:47 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*g_mapped;
int		g_toskip = 0;
int		g_inputsize = 0;

void	bsq_solve_input(char *str)
{
	short		**mat;
	int			h;
	int			l;
	t_square	square;
	t_biggest	big;

	h = 0;
	l = 0;
	mat = parse_input(str, &square, &h, &l);
	if (!h)
		return ;
	if (!l)
		return ;
	if (mat)
	{
		solver(mat, h, l, &big);
		big.l = l;
		big.h = h;
		printit(square, big);
		clear(mat, h);
	}
}

int		readinput(void)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;
	char			*data;

	while ((ret = read(0, buf, BUFF_SIZE)))
	{
		if (!(data = my_realloc(data, g_inputsize, g_inputsize + ret)))
			return (0);
		ft_memcat_input(buf, data + g_inputsize, ret);
		g_inputsize += ret;
	}
	if (!data)
	{
		ft_putstr_fd("map error\n", 2);
		return (0);
	}
	data[g_inputsize] = '\0';
	bsq_solve_input(data);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (readinput());
	else
		return (readmap(argc, argv, 0));
}

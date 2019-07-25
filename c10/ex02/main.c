/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:18:42 by marandre          #+#    #+#             */
/*   Updated: 2019/07/17 01:46:10 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_memcat(char *buff, char *filecontent, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		filecontent[i] = buff[i];
		i++;
	}
}

char	*load_content(char *s)
{
	int				fd;
	char			buf[BUFF_SIZE + 1];
	int				ret;
	unsigned int	size;
	char			*filecontent;

	size = 0;
	errno = 0;
	fd = open(s, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd(strerror(errno), 2);
		return (NULL);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
		size += ret;
	if (close(fd))
		return (NULL);
	if (!(filecontent = malloc(size + 1)))
		return (NULL);
	return (filecontent);
}

void	display_content(char *s, unsigned int offset)
{
	int				fd;
	int				ret;
	unsigned int	size;
	char			*content;
	char			buf[BUFF_SIZE + 1];

	if (!(content = load_content(s)))
		return ;
	size = 0;
	fd = open(s, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd(strerror(errno), 2);
		return ;
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		ft_memcat(buf, content + size, ret);
		size += ret;
	}
	if (close(fd))
		return ;
	if (offset > size)
		offset = size;
	manstr(offset, content + size - offset);
}

void	display_files_offset(int ac, char **av, unsigned int offset)
{
	int		i;
	int		fd;
	int		first;

	i = 3;
	first = 0;
	while (i < ac)
	{
		errno = 0;
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
			display_error_tail(av, errno, i);
		else
		{
			if (i > 3 && first == 1)
				ft_putchar('\n');
			if (ac >= 5)
				display_name(av[i]);
			display_content(av[i], offset);
			first = 1;
		}
		close(fd);
		i++;
	}
}

int		main(int ac, char **av)
{
	int		offset;

	if (ac == 1)
		return (readinput(0));
	if (ac == 2)
		display_usage_tail(av);
	if (ac >= 3)
	{
		offset = ft_atoi(av[2]);
		if (ac == 3 && (ft_str_is_num(av[2])))
		{
			return (readinput(offset));
		}
		if (!ft_str_is_num(av[2]))
		{
			if (!ft_str_is_num(av[2]) && av[2][0] != '+' && av[2][0] != '-')
				offset_error(av);
			else
				return (0);
		}
		display_files_offset(ac, av, offset);
	}
	return (0);
}

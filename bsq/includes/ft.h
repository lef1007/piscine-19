/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:44:36 by marandre          #+#    #+#             */
/*   Updated: 2019/07/24 21:30:05 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_H
# define _FT_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUFF_SIZE 1000000

extern char	*g_mapped;
extern int	g_toskip;
extern int	g_inputsize;

typedef struct	s_square
{
	char	obs;
	char	full;
	char	empty;
	int		lines;
}				t_square;

typedef struct	s_biggest
{
	int		value;
	int		i;
	int		j;
	int		h;
	int		l;
}				t_biggest;

int				ft_strlen(char *str);
void			ft_putstr_fd(char *s, int fd);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
void			ft_memcpy(void *dest, void *src, int n);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			bsq_solve_input(char *str);
int				readinput(void);
int				value(short **mat, int i, int j);
void			assign_big(short **mat, int i, int j, t_biggest *big);
int				assign_big_limit(short **mat, t_biggest *big, int i, int j);
int				ft_atoi_len(char *str, int len);
short			**to_int(int nav, t_square square, int h, int l);
int				getsizeof(char *map);
void			*throughfile(char *map, int fd);
void			*throughfile_input(char *map);
int				give_square(char *map_as_char, t_square *square);
int				checkmore(t_square *square, int l, int li, int counter);
void			clear(short **mat, int row);
void			ft_memcat_input(char *buff, char *filecontent,
	unsigned int size);
void			*my_realloc(void *ptr, unsigned int originallength,
	unsigned int newlength);
short			**parse(char *mat, t_square *square, int *row, int *col);
short			**parse_input(char *mat, t_square *square, int *row, int *col);
void			printit(t_square square, t_biggest big);
int				readmap(int argc, char **argv, int i);
void			solver(short **mat, int row, int col, t_biggest *big);

#endif

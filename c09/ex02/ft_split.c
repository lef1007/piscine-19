/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:56:35 by marandre          #+#    #+#             */
/*   Updated: 2019/07/12 15:39:20 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_if_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		++i;
	}
	return (0);
}

int		count_str(char *str, char *sep)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (check_if_sep(str[i], sep))
			i++;
		count++;
		while (str[i] && !(check_if_sep(str[i], sep)))
			i++;
	}
	return (count);
}

int		ft_strlen_sep(char *s, char *sep)
{
	int		i;

	i = 0;
	while (s[i] && (!check_if_sep(s[i], sep)))
		i++;
	return (i);
}

char	*assign_res(char *str, char *sep)
{
	int		i;
	char	*res;

	if (!(res = (char *)malloc(sizeof(char) * (ft_strlen_sep(str, sep) + 1))))
		return (NULL);
	i = 0;
	while (str[i] && !(check_if_sep(str[i], sep)))
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;

	if (!(words = (char **)malloc(sizeof(char *)
		* (count_str(str, charset) + 1))))
		return (NULL);
	index = 0;
	j = 0;
	i = 0;
	words[0] = NULL;
	while (str[i])
	{
		while (str[i] && check_if_sep(str[i], charset))
			i++;
		if (str[i])
			words[j++] = assign_res(str + i, charset);
		while (str[i] && !(check_if_sep(str[i], charset)))
			i++;
	}
	words[j] = NULL;
	return (words);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:56:35 by marandre          #+#    #+#             */
/*   Updated: 2019/07/10 22:13:02 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_words_count;

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

int		check_if_word(char c, char cbefore, char *charset)
{
	return (!check_if_sep(c, charset) && check_if_sep(cbefore, charset));
}

int		get_words_count(char *str, char *charset)
{
	int words_count;
	int i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (check_if_word(str[i], str[i - 1], charset) ||
			(!check_if_sep(str[i], charset) && i == 0))
			words_count++;
		i++;
	}
	return (words_count);
}

int		*get_words_size(char *str, char *charset)
{
	int index;
	int i;
	int words_count;
	int *words_size;

	i = 0;
	words_count = g_words_count;
	words_size = malloc(sizeof(int) * words_count);
	while (i <= words_count)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (!check_if_sep(str[i], charset))
			words_size[index]++;
		else if (i > 0 && !check_if_sep(str[i - 1], charset))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*words_size;

	g_words_count = get_words_count(str, charset);
	words = malloc(sizeof(char*) * (g_words_count + 1));
	words_size = get_words_size(str, charset);
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0')
		if (!check_if_sep(str[i], charset))
		{
			if (i == 0 || check_if_word(str[i], str[i - 1], charset))
				words[index] = malloc(words_size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (i > 0 && !check_if_sep(str[i - 1], charset) && ++index)
			j = 0;
	words[g_words_count] = 0;
	return (words);
}

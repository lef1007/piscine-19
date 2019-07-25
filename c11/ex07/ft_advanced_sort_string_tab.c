/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 08:11:10 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 19:03:23 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*s;

	i = 0;
	if (!tab[1])
		return ;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			s = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = s;
			i = 0;
		}
		else
			i++;
	}
}

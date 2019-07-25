/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 19:04:44 by marandre          #+#    #+#             */
/*   Updated: 2019/07/02 22:53:33 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int j;
	int i;
	int temp;

	j = size - 1;
	i = 0;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

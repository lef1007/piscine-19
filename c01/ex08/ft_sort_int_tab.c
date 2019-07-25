/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 22:28:48 by marandre          #+#    #+#             */
/*   Updated: 2019/07/04 11:09:16 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *tab, int i)
{
	int temp;

	temp = tab[i];
	tab[i] = tab[i + 1];
	tab[i + 1] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int j;
	int i;

	j = 0;
	while (j <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(tab, i);
			}
			i++;
		}
		j++;
	}
}

int main(void)
{
	int j = 0;
	srand(45);
	int i;
	int size;
	size = 123;
	int tab[size];

	i = 0;
	while (size != i)
	{
		tab[i] = rand();
		i++;
	}
	ft_sort_int_tab(tab,size);
	while (size != j)
	{
		printf("%d\n",tab[j]);
		j++;
	}
}

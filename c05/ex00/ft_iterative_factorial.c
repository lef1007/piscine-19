/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 19:33:52 by marandre          #+#    #+#             */
/*   Updated: 2019/07/07 22:04:30 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		k;
	double	i;

	k = 0;
	i = 1.0;
	if (nb >= 1)
	{
		k = 2;
		while (k <= nb)
		{
			i = i * k;
			k++;
		}
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
	return (i);
}

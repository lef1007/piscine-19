/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 01:01:37 by marandre          #+#    #+#             */
/*   Updated: 2019/07/07 22:08:40 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

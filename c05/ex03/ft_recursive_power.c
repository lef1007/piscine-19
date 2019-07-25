/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 01:09:02 by marandre          #+#    #+#             */
/*   Updated: 2019/07/07 23:11:51 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	value;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		value = nb;
		return (value * ft_recursive_power(nb, power - 1));
	}
	else
		return (1);
}

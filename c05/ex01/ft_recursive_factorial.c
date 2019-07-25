/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 20:24:17 by marandre          #+#    #+#             */
/*   Updated: 2019/07/08 18:07:15 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int	value;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	value = nb;
	return (value * ft_recursive_factorial(nb - 1));
}

int main()
{
	printf("%d", ft_recursive_factorial(5));
	return 0;
}
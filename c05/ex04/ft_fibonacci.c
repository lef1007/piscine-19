/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 01:18:33 by marandre          #+#    #+#             */
/*   Updated: 2019/07/08 18:12:39 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2 && index >= 0)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
	printf("%d", ft_fibonacci(8));
}
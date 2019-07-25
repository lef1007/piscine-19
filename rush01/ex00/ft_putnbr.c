/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:00:43 by marandre          #+#    #+#             */
/*   Updated: 2019/07/14 16:25:35 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *s);

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			ft_putnbr(-n);
		}
		else
		{
			if (n > 9)
				ft_putnbr(n / 10);
			ft_putchar(n % 10 + '0');
		}
	}
}

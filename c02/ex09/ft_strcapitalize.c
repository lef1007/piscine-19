/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 11:40:58 by marandre          #+#    #+#             */
/*   Updated: 2019/07/05 14:37:00 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_alpha(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] += 'A' - 'a';
			i++;
			while (is_alpha(str[i]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 'a' - 'A';
				i++;
			}
		}
		i++;
	}
	return (str);
}

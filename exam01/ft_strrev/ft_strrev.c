/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 17:12:50 by exam              #+#    #+#             */
/*   Updated: 2019/07/12 17:50:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[count])
		count++;
	while (i < count && str[i] != '\0')
	{
		char temp = str[i];	
		str[i] = str[count - 1];
		str[count - 1] = temp;
		i++;
		count--;
	}

	return (str);	
}


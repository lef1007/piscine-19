/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exam.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 20:58:32 by marandre          #+#    #+#             */
/*   Updated: 2019/07/25 23:09:49 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *element;

	element = NULL;
	if(!(element = malloc(sizeof(t_list))))
		return NULL;
	element.data = data;
	element.next = NULL;
	return element;
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;

	new = ft_create_elem(data);
	if (!new)
		return ;
	new->next = *begin_list;
	*begin_list = new;
}

int		ft_list_size(t_list *begin_list)
{
	int i = 0;
	if (!begin_list)
		return (0);
	else
	{
		while (begin_list)
		{
			i++;
			begin_list = begin_list->next;
		}
	}
}

t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
	{
		begin_list = begin_list->next;
	}
	return begin_list;
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *data;

	data = *begin_list;
	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		while ((*begin_list)->next)
		{
			begin_list = (*begin_list)->next;	
		}	
		(*begin_list)->next = data;
	}
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int i;
	t_list *start;
	t_list *list;

	if (size == 0)
		return NULL;

	i = 1;
	list = ft_create_elem(strs[size - i++]);
	start = list;
	while (size - i >= 0)
	{
		list->next = ft_create_elem(strs[size - i]);
		list = list->next;
		i++;
	}
	return start;
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *temp;
	t_list *swap;

	temp = begin_list;
	swap = NULL;
	while (temp)
	{
		swap = temp->next;
		free_fct(temp->data);
		free(temp);
		temp = swap;
	}
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int i = 0;
	if (!begin_list)
		return NULL;
	while (begin_list && i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	if (i == nbr)
		return begin_list;
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*next;
	t_list	*current;

	previous = NULL;
	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*begin_list = previous;
}

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	
	if (!begin_list)
		return NULL;
	else
	{
		list = *begin_list;
		while (list)
		{
			if (!cmp(list->data, data_ref))
				return list;
			else
				list = list->next;
		}
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *remove;

	while (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			remove = *begin_list;
			*begin_list = (*begin_list)->next;
			free_fct(remove->data);
			free(remove);
		}
		else
		{
			ft_list_remove_if(&(*begin_list)->next, data_ref, cmp, free_fct);
		}
	}
	
}

static void	ft_swap(t_list **elem1, t_list **elem2)
{
	void	*tmp_data;

	tmp_data = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = tmp_data;
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		i;

	i = 1;
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	while (i)
	{
		i = 0;
		tmp1 = *begin_list;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if ((*cmp)(tmp1->data, tmp2->data) > 0)
			{
				ft_swap(&tmp1, &tmp2);
				i = 1;
			}
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;

	list = begin_list;
	if (!list || !(list->next))
		return ;
	tmp = list->next;
	tmp2 = tmp->next;
	list->next = 0;
	tmp->next = list;
	while (tmp2)
	{
		list = tmp;
		tmp = tmp2;
		tmp2 = tmp2->next;
		tmp->next = list;
	}
	begin_list = tmp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:53:06 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:53:06 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new_node;
	t_list	*current;
	t_list	*prev;

	new_node = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = new_node;
		return ;
	}
	current = *begin_list;
	prev = (void *)0;
	while (current)
	{
		if ((*cmp)(current->data, data) > 0)
		{
			if (prev)
				prev->next = new_node;
			else
				*begin_list = new_node;
			new_node->next = current;
			return ;
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
	prev->next = new_node;
}

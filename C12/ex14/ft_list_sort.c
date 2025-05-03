/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:53:05 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:53:05 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*tmp;
	int		swapped;

	if (!begin_list || !*begin_list)
		return ;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		current = *begin_list;
		while (current->next)
		{
			if ((*cmp)(current->data, current->next->data) > 0)
			{
				tmp = current->data;
				current->data = current->next->data;
				current->next->data = tmp;
				swapped = 1;
			}
			current = current->next;
		}
	}
}

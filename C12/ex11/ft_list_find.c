/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:53:03 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:53:03 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		while (begin_list)
		{
			if ((*cmp)(begin_list->data, data_ref) == 0)
				return (begin_list);
			begin_list = begin_list->next;
		}
	}
	return ((void *)0);
}

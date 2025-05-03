/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:53:03 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:53:03 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (begin_list)
	{
		while (begin_list)
		{
			if ((*cmp)(begin_list->data, data_ref) == 0)
				(*f)(begin_list->data);
			begin_list = begin_list->next;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:53:06 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:53:06 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return (count);
}

t_list	*ft_list_at(t_list *begin_list, int index)
{
	while (index-- && begin_list)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		left;
	int		right;
	void	*temp;
	t_list	*left_node;
	t_list	*right_node;

	left = 0;
	right = ft_list_size(begin_list) - 1;
	while (left < right)
	{
		left_node = ft_list_at(begin_list, left);
		right_node = ft_list_at(begin_list, right);
		temp = left_node->data;
		left_node->data = right_node->data;
		right_node->data = temp;
		left++;
		right--;
	}
}

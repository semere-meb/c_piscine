/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:17:45 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:53:11 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *,
			void *))
{
	void	*res;

	if (!root)
		return ((void *)0);
	res = btree_search_item(root->left, data_ref, cmpf);
	if (res)
		return (res);
	else if (cmpf(root->item, data_ref) == 0)
		return (root);
	return (btree_search_item(root->left, data_ref, cmpf));
}

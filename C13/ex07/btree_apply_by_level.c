/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:13:48 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:53:12 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

static void	enqueue(t_queue **queue, t_btree *node, int level)
{
	t_queue	*new;
	t_queue	*tmp;

	new = malloc(sizeof(t_queue));
	if (!new)
		return ;
	new->node = node;
	new->level = level;
	new->next = NULL;
	if (!*queue)
		*queue = new;
	else
	{
		tmp = *queue;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

static t_queue	*dequeue(t_queue **queue)
{
	t_queue	*front;

	if (!*queue)
		return (NULL);
	front = *queue;
	*queue = front->next;
	return (front);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	t_queue	*queue;
	t_queue	*curr;
	int		current_level;
	int		is_first_elem;

	if (!root)
		return ;
	queue = NULL;
	current_level = 0;
	is_first_elem = 1;
	enqueue(&queue, root, 0);
	while (queue)
	{
		curr = dequeue(&queue);
		if (curr->level != current_level)
			is_first_elem = 1;
		current_level = curr->level;
		applyf(curr->node->item, curr->level, is_first_elem);
		is_first_elem = 0;
		if (curr->node->left)
			enqueue(&queue, curr->node->left, curr->level + 1);
		if (curr->node->right)
			enqueue(&queue, curr->node->right, curr->level + 1);
		free(curr);
	}
}

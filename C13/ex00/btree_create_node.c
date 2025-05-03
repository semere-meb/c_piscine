#include "ft_btree.h"
#include <stdlib.h>

t_btree *btree_create_node(void *item) {
	t_btree *new_node;
	new_node = malloc(sizeof(t_btree));
	if (!new_node) return NULL;

	new_node->item = item;
	new_node->right = NULL;
	new_node->left = NULL;

	return new_node;
}

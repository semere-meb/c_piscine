#include "ft_btree.h"

void	count_subtree(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	applyf(root->item);
	count_subtree(root->left, applyf);
	count_subtree(root->right, applyf);
}

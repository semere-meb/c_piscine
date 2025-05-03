#include "ft_btree.h"

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *)) {
	if (!root)
		return (void *)0;

	void *res =   btree_search_item(root->left, data_ref, cmpf);
	if (res)
		return res;
	else if (cmpf(root->item, data_ref) == 0)
		return root;
	return btree_search_item(root->left, data_ref, cmpf);
}

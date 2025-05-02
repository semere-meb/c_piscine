#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*tmp;
	t_list	*list;

	i = 0;
	list = NULL;
	while (i < size)
	{
		tmp = ft_create_elem(strs[i++]);
		tmp->next = list;
		list = tmp;
	}
	return (list);
}

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*prev;
	t_list	*next;

	current = *begin_list;
	prev = NULL;
	while (current)
	{
		next = current->next;
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = next;
			else
				prev->next = next;
			(*free_fct)(current->data);
			free(current);
		}
		else
			prev = current;
		current = next;
	}
}

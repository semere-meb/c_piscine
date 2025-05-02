#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list	*current;
	t_list	*prev;

	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	current = *begin_list1;
	prev = (void *)0;
	while (current && begin_list2)
	{
		if ((*cmp)(current->data, begin_list2->data) > 0)
		{
			t_list *next_b2 = begin_list2->next;
			if (prev)
				prev->next = begin_list2;
			else
				*begin_list1 = begin_list2;
			begin_list2->next = current;
			prev = begin_list2;
			begin_list2 = next_b2;
		}
		else
		{
			prev = current;
			current = current->next;
		}

	}
	if (begin_list2)
		prev->next = begin_list2;
}

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int	i;

	if (nbr < 0)
		return ((void *)0);
	i = 0;
	while (i < nbr)
	{
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			return ((void *)0);
		i++;
	}
	return (begin_list);
}

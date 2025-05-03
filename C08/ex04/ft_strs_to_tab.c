/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:47 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:47 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*copy_str(char **av, int index, int size)
{
	char	*str;
	int		i;

	str = malloc((size + 1) * sizeof(str));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = av[index][i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;
	int					size;

	tab = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	i = 0;
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		size = str_len(av[i]);
		tab[i].size = size;
		tab[i].str = av[i];
		tab[i].copy = copy_str(av, i, size);
		if (!tab[i].copy)
		{
			while (--i >= 0)
				free(tab[i].copy);
			free(tab);
			return (NULL);
		}
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

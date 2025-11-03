/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:43 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:43 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int count, char **args)
{
	int	index;

	index = count - 1;
	if (count > 1)
	{
		while (index > 0)
		{
			ft_putstr(args[index--]);
			write(1, "\n", 1);
		}
	}
}

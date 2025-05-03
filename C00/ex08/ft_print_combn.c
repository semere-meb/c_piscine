/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:34 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:34 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	power(int a, int b)
{
	int	i;
	int	res;

	i = 0;
	res = a;
	while (b > 1)
	{
		res *= a;
		b--;
	}
	return (res);
}

void	ft_print_combn(int n)
{
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:06:58 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/24 12:10:50 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	if (power < 0)
		return (0);
	i = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int	main(void)
{
	printf("%sTESTING ft_iterative_power\n\n", ANSI_COLOR_GREEN);
	for (int i = -2; i < 11; i++)
	{
		for (int j = -2; j < 3; j++)
			printf("%sCASE%s:%5d \traised to %5d \t%5d\n", ANSI_COLOR_GREEN,
				ANSI_COLOR_RESET, i, j, ft_iterative_power(i, j));
	}
}
*/

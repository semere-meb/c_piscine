/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:11:04 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/24 12:12:21 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int	main(void)
{
	printf("%sTESTING ft_recursive_power\n\n", ANSI_COLOR_RED);
	for (int i = -2; i < 11; i++)
	{
		for (int j = -2; j < 3; j++)
			printf("%sCASE%s:%5d \traised to %5d \t%5d\n", ANSI_COLOR_GREEN,
				ANSI_COLOR_RESET, i, j, ft_recursive_power(i, j));
	}
}
*/

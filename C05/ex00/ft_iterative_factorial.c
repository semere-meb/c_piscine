/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 23:45:45 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 23:48:44 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		result *= nb--;
	return (result);
}

/*
#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int	main(void)
{
	printf("%sTESTING ft_iterative_factorial\n\n", ANSI_COLOR_RED);
	for (int i = -2; i < 11; i++)
	{
		printf("%sCASE%s:%3d \tfactorial =%8d\n", ANSI_COLOR_GREEN,
			ANSI_COLOR_RESET, i, ft_iterative_factorial(i));
	}
}
*/


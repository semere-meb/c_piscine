/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:03:37 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/24 12:06:46 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int	main(void)
{
	printf("%sTESTING ft_recursive_factorial\n\n", ANSI_COLOR_RED);
	for (int i = -2; i < 11; i++)
	{
		printf("%sCASE%s:%3d \tfactorial =%8d\n", ANSI_COLOR_GREEN,
			ANSI_COLOR_RESET, i, ft_recursive_factorial(i));
	}
}
*/

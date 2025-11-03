/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:41:24 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/24 12:46:54 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int	main(void)
{
	printf("%sTESTING ft_find_next_prime\n\n", ANSI_COLOR_RED);
	for (int i = -2; i <= 49; i++)
		printf("%sCASE%s: %5d \tft_find_next_prime\t%5d\n", ANSI_COLOR_GREEN,
			ANSI_COLOR_RESET, i, ft_find_next_prime(i));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:27:25 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/24 12:41:04 by semebrah         ###   ########.fr       */
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

/*
#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int	main(void)
{
	printf("%sTESTING ft_is_prime\n\n", ANSI_COLOR_RED);
	for (int i = -2; i <= 49; i++)
		printf("%sCASE%s: %5d \tft_is_prime\t%5d\n", ANSI_COLOR_GREEN,
			ANSI_COLOR_RESET, i, ft_is_prime(i));
}
*/

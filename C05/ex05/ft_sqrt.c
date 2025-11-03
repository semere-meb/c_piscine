/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:17:29 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/24 12:27:10 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

int	main(void)
{
	printf("%sTESTING ft_sqrt\n\n", ANSI_COLOR_RED);
	for (int i = -2; i <= 51; i++)
		printf("%sCASE%s: %5d \tft_sqrt\t%5d\n", ANSI_COLOR_GREEN,
			ANSI_COLOR_RESET, i, ft_sqrt(i));
}
*/

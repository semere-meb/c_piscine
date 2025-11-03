/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:18:48 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 18:26:14 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, (char []){'0' + nb % 10}, 1);
}

/*
#include <stdio.h>

int	main(void)
{
	int	tests[] = {123, 0, -234, -2147483648, 2147483647};
	int	i;

	i = 0;
	printf("TESTING ft_putnbr\n\n");
	while (i < 5)
	{
		ft_putnbr(tests[i++]);
		write(1, "\n", 1);
	}
}
*/

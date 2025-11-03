/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:12:51 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 18:18:33 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*tests[] = {"hello", "hi", "", "\\"};
	int		i;

	i = 0;
	printf("TESTING ft_putstr\n\n");
	while (i < 4)
	{
		ft_putstr(tests[i++]);
		write(1, "\n", 1);
	}
}
*/

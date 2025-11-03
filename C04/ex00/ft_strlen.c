/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:08:55 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 18:12:35 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*tests[] = {"hello", "hi", "", "\\"};
	int		i;

	i = 0;
	printf("TESTING ft_strlen\n\n");
	while (i < 4)
	{
		printf("str:%-10s\tlen:%d\n", tests[i], ft_strlen(tests[i]));
		i++;
	}
}
*/

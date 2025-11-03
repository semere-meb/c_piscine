/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:26:50 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 18:26:50 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int				num;
	int				sign;
	unsigned int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void) {
	char *tests[] = {
		"12342",
		"    +-+---12342",
		"		\r\t\n +12342kk",
		"-2147483648hey",
		"2147483647hekhkdf",
		// "2147483648",
	};

	int i = 0;

	printf("TESTING ft_atoi\n\n");

	while (i < 5){
		printf("str:%-25s\tatoi:%-15d\tft_atoi:%-15d\tsame:%s\n", tests[i],
			atoi(tests[i]), ft_atoi(tests[i]),
			(atoi(tests[i]) == ft_atoi(tests[i])) ? "PASS" : "FAIL" );
		i++;
	}
}
*/

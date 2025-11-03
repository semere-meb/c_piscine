/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:35:59 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/16 20:28:01 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
		if (!ft_isdigit(*str++))
			return (0);
	return (1);
}

/*
#include <stdio.h>

int	main(void) {
	int size = 7;
	int i = 0;
	char* strs [] = {
		"heloo BBello mello;",
		"heloo bello mello",
		"helooBBellomello",
		"heoobellomello",
		"HELOOBBELLOMELLO;",
		"1803487",
		"helloWorld1803487"
	};

	printf("TESTING: ft_str_is_numeric\n\n");
	while (i < size){
		printf("%-30s:%d\n", strs[i], ft_str_is_numeric(strs[i]));
		i++;
	}
}
*/

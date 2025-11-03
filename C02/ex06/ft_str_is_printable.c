/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:45:30 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/16 20:43:18 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
		if (!ft_isprint(*str++))
			return (0);
	return (1);
}

/*
#include <stdio.h>

int	main(void) {
	int size = 9;
	int i = 0;
	char* strs [] = {
		"heloo BBello mello;",
		"heloo bello mello",
		"helooBBellomello",
		"heoobellomello",
		"HELOOBBELLOMELLO",
		"1803487",
		"helloWorld1803487",
		"\n\t\r",
		"hel\t"
	};

	printf("TESTING: ft_str_is_printable\n\n");
	while (i < size){
		printf("%-30s:%d\n", strs[i], ft_str_is_printable(strs[i]));
		i++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:29:29 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/16 20:20:33 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
		if (!ft_isalpha(*str++))
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

	printf("TESTING: ft_str_is_alpha\n\n");
	while (i < size){
		printf("%-30s:%d\n", strs[i], ft_str_is_alpha(strs[i]));
		i++;
	}
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:44:45 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/17 01:40:03 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

char	ft_toupcase(char c)
{
	if (ft_islower(c))
		return (c - ('a' - 'A'));
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupcase(str[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void) {
	// int size = 9;
	// int i = 0;
	// char* strs [] = {
	// 	"heloo BBello mello;",
	// 	"heloo bello mello",
	// 	"helooBBellomello",
	// 	"heoobellomello",
	// 	"HELOOBBELLOMELLO",
	// 	"1803487",
	// 	"helloWorld1803487",
	// 	"\n\t\r",
	// 	"hel\t"
	// };
	//
	// printf("TESTING: ft_strupcase\n\n");
	// while (i < size){
	// 	printf("%-30s:%s\n", strs[i], ft_strupcase(strs[i]));
	// 	i++;
	// }
	//
	char src[] = "hello world!";
	printf("%s", ft_strupcase(src));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 01:40:37 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/17 01:46:45 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

char	ft_tolowcase(char c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolowcase(str[i]);
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
	char src[] = "HEllO WORLD!";
	printf("%s", ft_strlowcase(src));
}
*/

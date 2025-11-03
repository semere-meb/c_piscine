/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:21:35 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/15 22:29:07 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	int i;
	int size = 50;
	char *src = "hello";
	char dest1[size];
	char dest2[size];

	i = 0;
	while (i < size)
		dest1[i++] = '#';

	printf("BEFORE     strcpy:%s:\n", dest1);
	printf("AFTER      strcpy:%s:\n", strcpy(dest1, src));

	i = 0;
	while (i < size)
		dest2[i++] = '#';

	printf("BEFORE ft_ strcpy:%s:\n", dest2);
	printf("AFTER  ft_ strcpy:%s:\n", strcpy(dest2, src));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:30:03 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/17 20:09:54 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*
#include <stdio.h>

int	main(void) {
	char *src = "howdy 42 world!";
	int size = 5;
	//char dest1[size];
	char dest2[size];
	int res;

	//res = strlcpy(dest1, src, size);
	//printf("   strlcpy:%s:%d\n", dest1, res);

	res = ft_strlcpy(dest2, src, size);
	printf("ft_strlcpy:%s:%d\n", dest2, res);
}
*/

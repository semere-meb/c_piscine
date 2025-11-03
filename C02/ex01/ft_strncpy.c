/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:31:48 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/15 22:28:46 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char *src = "abcdefhij";
	char dest1[5] = "12";
	char dest2[5] = "12";
	int n = 6;

	printf("%10s:%s:\n", "ft_strncpy", ft_strncpy(dest2, src, n));
	printf("%10s:%s:\n",    "strncpy",    strncpy(dest1, src, n));
}
*/

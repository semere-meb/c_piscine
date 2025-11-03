/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:51:03 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 00:06:15 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	src_len = ft_strlen(src);
	dest_len = 0;

	while (dest_len < size && dest[dest_len])
		dest_len++;
	if(dest_len >= size)
		return size+src_len;
	i = 0;
	while (dest_len + i < size - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char			dest2[6] = "abcd";
	char			src[10] = "1234567890";
	unsigned int	ft_strlcat_res;

	// char dest1[10] = "abcd";
	// unsigned int strlcat_res;
	// strlcat_res    =       strlcat(dest1, src, 5);
	// printf("   strlcat:%d:dest1:%s",    strlcat_res, dest1);
	ft_strlcat_res = ft_strlcat(dest2, src, 7);
	printf("ft_strlcat:%d:dest:%s", ft_strlcat_res, dest2);
}
*/

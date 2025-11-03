/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:37:46 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/21 11:28:47 by semebrah         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	unsigned int i = 0;
	unsigned int j;
	char *res;
	char *res_ft;

	char tests1[4][10] = {
		"ab",
		"a",
		""
	};

	char tests2[4][10] = {
		"ab",
		"a",
		""
	};


	printf("TESTING ft_strcat\n\n");
	while (i < 3-1){
		j = i+1;
		while (j < 3) {
			printf("case =>\t s1:%-15s\t s2:%-15s\t", tests1[i], tests1[j]);
			res = strcat(tests1[i], tests1[j]);
			res_ft = strcat(tests2[i], tests2[j]);
			printf("strcat:%s\t", res);
			printf("ft_strcat:%s\n", res_ft);
			j++;
		}
		i++;
	}
}
*/

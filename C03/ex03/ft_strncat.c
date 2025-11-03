/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:40:50 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/21 09:45:25 by semebrah         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;

	while (i < nb && src[i])
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
	unsigned int n;
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


	printf("TESTING ft_strncat\n\n");
	while (i < 3-1){
		j = i+1;
		while (j < 3) {
			n = 0;
			while (n < 6){
				printf("case =>\t s1:%-15s\t s2:%-15s\t n:%2d\t", tests1[i],
					tests1[j], n);
				res =       strncat(tests1[i], tests1[j], n);
				res_ft = ft_strncat(tests2[i], tests2[j], n);
				printf("   strncat:%-20s\t", res);
				printf("ft_strncat:%-20s\n", res_ft);
				n++;
			}
			j++;
		}
		i++;
	}
}
*/

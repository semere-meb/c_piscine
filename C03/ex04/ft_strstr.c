/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:29:03 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/21 12:04:45 by semebrah         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	to_find_len;
	unsigned int	i;

	to_find_len = ft_strlen(to_find);
	i = 0;
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, to_find_len) == 0)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	i;
	unsigned int	j;
	char			*tests[4] = {"abcdef", "de", "abc", ""};

	i = 0;
	printf("TESTING ft_strstr\n\n");
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			printf("case =>\t s1:%-15s\t s2:%-15s\t strstr:%-15s\t ft_strstr:%-15s\n",
				tests[i], tests[j],
					strstr(tests[i], tests[j]),
				ft_strstr(tests[i], tests[j]));
			j++;
		}
		i++;
	}
}

#include <stdio.h>
#include <string.h>

int	main(void){
	char *s1 = "";
	char *s2 = "";
	printf("s1:%s\ts2:%s\tstrsr:%s\tft_strstr:%s", s1, s2, strstr(s1, s2),
		ft_strstr(s1, s2));
}
*/

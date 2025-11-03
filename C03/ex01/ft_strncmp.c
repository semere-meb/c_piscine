/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:36:24 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/21 09:37:30 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	unsigned int i = 0;
	unsigned int j;
	unsigned int n;
	char *tests[4] = {
		"ab",
		"a",
		""
	};

	printf("TESTING ft_strncmp\n\n");
	while (i < 3){
		j = 0;
		while (j < 3) {
			n = 0;
			while (n < 3){
				printf("case =>\t s1:%-15s\t s2:%-15s\t n:%2d\t\
				strncmp:%4d\t ft_strncmp:%4d\n",
					tests[i], tests[j], n, strncmp(tests[i], tests[j], n),
					ft_strncmp(tests[i], tests[j], n));
				n++;
			}
			j++;
		}
		i++;
	}
}
*/

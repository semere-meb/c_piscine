/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:34:27 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/21 09:35:32 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	unsigned int i = 0;
	unsigned int j;
	char *tests[4] = {
		"ab",
		"a",
		""
	};

	printf("TESTING ft_strcmp\n\n");
	while (i < 3){
		j = 0;
		while (j < 3) {
			printf("case =>\t s1:%-15s\t s2:%-15s\t strcmp:%4d\t ft_strcmp:%4d\n",
				tests[i], tests[j], strcmp(tests[i], tests[j]),
				ft_strcmp(tests[i], tests[j]));
			j++;
		}
		i++;
	}
}
*/

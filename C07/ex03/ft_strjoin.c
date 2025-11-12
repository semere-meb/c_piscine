/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:44 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:44 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned long	str_len(char *str)
{
	unsigned long	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	populate_string(char *str, int size, char **strs, char *sep)
{
	int	strs_i;
	int	word_i;
	int	str_i;
	int	sep_i;

	strs_i = 0;
	str_i = 0;
	while (strs_i < size)
	{
		word_i = 0;
		while (strs[strs_i][word_i])
			str[str_i++] = strs[strs_i][word_i++];
		if (strs_i < size - 1)
		{
			sep_i = 0;
			while (sep[sep_i])
				str[str_i++] = sep[sep_i++];
		}
		strs_i++;
	}
	str[str_i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				i;
	unsigned long	length;
	char			*res;

	i = 0;
	length = 0;
	while (i < size)
		length += str_len(strs[i++]);
	res = (char *)malloc(length + (size - 1) * str_len(sep) + 1);
	populate_string(res, size, strs, sep);
	return (res);
}

/*
#include <stdio.h>
int main(int argc, char **argv) {
	printf("%s\n", ft_strjoin(argc-2, &argv[2], argv[1]));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:51 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:51 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_delimiter(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i++] == c)
			return (1);
	}
	return (0);
}

char	*substr(const char *str, int start, int end)
{
	int		i;
	char	*result;

	if (start >= end)
		return (NULL);
	i = 0;
	result = (char *)malloc((end - start + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (start <= end)
		result[i++] = str[start++];
	result[i] = '\0';
	return (result);
}

void	allocate(const char *str, const char *charset, char **array)
{
	int	len;
	int	i;
	int	prev;

	len = 0;
	i = 0;
	prev = -1;
	while (str[i] && !is_delimiter(str[i], charset))
		i++;
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i], charset))
			i++;
		prev = i - 1;
		while (str[i] && !is_delimiter(str[i], charset))
			i++;
		if (prev != -1 && str[i])
		{
			array[len] = substr(str, prev, i);
			if (!array[len])
				return ;
			prev = -1;
			len++;
		}
	}
}

int	array_len(const char *str, const char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] && !is_delimiter(str[i], charset))
		i++;
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i], charset))
			i++;
		while (str[i] && !is_delimiter(str[i], charset))
			i++;
		if (str[i])
			len++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	char	**array;

	len = array_len(str, charset);
	array = malloc((len + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	allocate(str, charset, array);
	array[len] = NULL;
	return (array);
}

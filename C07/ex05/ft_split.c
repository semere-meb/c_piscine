/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:45 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:45 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_delimiter(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
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
	while (start < end)
		result[i++] = str[start++];
	result[i] = '\0';
	return (result);
}

void	allocate(const char *str, const char *charset, char **array)
{
	int	len;
	int	i;
	int	start;

	len = 0;
	i = 0;
	start = -1;
	while (str[i])
	{
		if (!is_delimiter(str[i], charset))
		{
			if (start == -1)
				start = i;
		}
		else if (start != -1)
		{
			array[len++] = substr(str, start, i);
			start = -1;
		}
		i++;
	}
	if (start != -1)
		array[len++] = substr(str, start, i);
}

int	array_len(const char *str, const char *charset)
{
	int	len;
	int	i;
	int	start;

	len = 0;
	i = 0;
	start = -1;
	while (str[i])
	{
		if (!is_delimiter(str[i], charset))
		{
			if (start == -1)
				start = i;
		}
		else if (start != -1)
		{
			len++;
			start = -1;
		}
		i++;
	}
	if (start != -1)
		len++;
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

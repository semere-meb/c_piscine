/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:50:42 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/17 19:28:35 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isalnum(int c)
{
	return (ft_islower(c) || ft_islower(c + 32) || (c >= '0' && c <= '9'));
}

char	ft_toupcase(char c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

char	ft_tolowcase(char c)
{
	if (ft_islower(c + 32))
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !ft_isalnum(str[i]))
			i++;
		if (str[i])
		{
			str[i] = ft_toupcase(str[i]);
			i++;
		}
		while (str[i] && ft_isalnum(str[i]))
		{
			str[i] = ft_tolowcase(str[i]);
			i++;
		}
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	st[] = "hi, hoW ARE YOu? 42woRds forty-two; fifty+and+one";

	printf("%s", ft_strcapitalize(st));
}
*/

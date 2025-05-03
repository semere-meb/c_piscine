/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:38 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:38 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	char_type(char str)
{
	if (str >= 'a' && str <= 'z')
		return ('l');
	if (str >= 'A' && str <= 'Z')
		return ('u');
	if (str >= '0' && str <= '9')
		return ('n');
	return ('o');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (char_type(str[i]) == 'l')
		{
			if (i == 0 || char_type(str[i - 1]) == 'o')
			{
				str[i] -= ('a' - 'A');
			}
		}
		else if (char_type(str[i]) == 'u' && i != 0)
		{
			if (char_type(str[i - 1]) != 'o')
			{
				str[i] += ('a' - 'A');
			}
		}
		i++;
	}
	return (str);
}

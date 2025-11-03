/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 02:24:34 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 02:25:31 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_base_valid(char *base)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_index_in_base(char c, char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	sign;
	int	i;
	int	base_len;

	number = 0;
	sign = 1;
	i = 0;
	base_len = ft_strlen(base);
	if (!is_base_valid(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (get_index_in_base(str[i], base) >= 0)
	{
		number = number * base_len + get_index_in_base(str[i], base);
		i++;
	}
	return (number * sign);
}

/*
#include <stdio.h>

int	main(void) {
	printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("%d\n", ft_atoi_base("  -20000000000", "01234567"));
	printf("%d\n", ft_atoi_base("-80000000", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-npppppppppp", "poneyvif"));
	printf("%d\n", ft_atoi_base("  \t\n\r+++---npppppppppp", "poneyvif"));
}
*/

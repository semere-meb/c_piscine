/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:45 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:45 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str);
int		char_index(char c, char *str);
int		is_base_valid(char *base);
int		is_nbr_valid(char *nbr, char *base);

long	base_to_long(char *nbr, char *base)
{
	int		i;
	long	val;
	int		base_len;

	base_len = str_len(base);
	i = 0;
	val = 0;
	while (nbr[i])
	{
		val *= base_len;
		val += char_index(nbr[i], base);
		i++;
	}
	return (val);
}

int	compute_size(long val, char *base_to, int is_negative)
{
	int	size;
	int	base_to_len;

	size = 0;
	base_to_len = str_len(base_to);
	if (val == 0)
		return (1 + is_negative);
	while (val > 0)
	{
		val /= base_to_len;
		size++;
	}
	return (size + is_negative);
}

char	*long_to_base(long val, char *base, int size, int is_negative)
{
	int		base_len;
	int		i;
	char	*result;

	base_len = str_len(base);
	i = size;
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	result[i--] = '\0';
	if (val == 0)
		result[i--] = base[0];
	while (val > 0)
	{
		result[i--] = base[val % base_len];
		val /= base_len;
	}
	if (is_negative)
		result[i--] = '-';
	return (&result[i + 1]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	val;
	int		size;
	int		is_negative;
	char	*result;

	val = 0;
	size = 0;
	is_negative = 0;
	if (!is_base_valid(base_to))
		return (NULL);
	if (!is_base_valid(base_from))
		return (NULL);
	if (nbr[0] == '-')
	{
		is_negative = 1;
		nbr++;
	}
	if (!is_nbr_valid(nbr, base_from))
		return (NULL);
	val = base_to_long(nbr, base_from);
	size = compute_size(val, base_to, is_negative);
	result = long_to_base(val, base_to, size, is_negative);
	return (result);
}

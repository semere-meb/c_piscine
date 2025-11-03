/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:21:15 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/23 22:37:27 by semebrah         ###   ########.fr       */
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

int	is_base_valid(char *base, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
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

void	putbase(long nbr, char *base, int len)
{
	if (nbr >= len)
		putbase(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long			num;
	unsigned int	len;

	len = ft_strlen(base);
	num = nbr;
	if (!is_base_valid(base, len))
		return ;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	putbase(num, base, len);
}

/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "poneyvif");
	write(1, "\n", 1);
	// ft_putnbr_base(-2147483648, "helowrd");
	// ft_putnbr_base(-2147483648, "helloworld");
	// ft_putnbr_base(-2147483648, "-helowrd");
}
*/

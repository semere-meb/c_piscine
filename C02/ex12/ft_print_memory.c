/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:18:06 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/19 11:22:23 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned long val, int digit)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (digit > 1)
		ft_print_hex(val / 16, digit - 1);
	write(1, &hex[val % 16], 1);
}

void	print_bytes_as_hex(char *str, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < len)
			ft_print_hex(str[i], 2);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	print_bytes_as_ascii(char *str, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	i;
	unsigned int	len;
	char			*str;

	i = 0;
	str = (char *)addr;
	while (i < size)
	{
		if (size - i >= 16)
			len = 16;
		else
			len = size - i;
		ft_print_hex((unsigned long)&str[i], 16);
		write(1, ": ", 2);
		print_bytes_as_hex(&str[i], len);
		print_bytes_as_ascii(&str[i], len);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

/*
int	main(void)
{
	char	str[120] =  "Lorem ipsum dolor sit amet,
			consectetur adipiscing elit. Aliquam eu turpis massa. Pellentesque";

	ft_print_memory(str, 100);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:38 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:38 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_char_non_printable(char str)
{
	if (str <= 31)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	print_segment(char *str, int size, char hex)
{
	int		i;
	char	*template;

	i = 0;
	while (i < size)
	{
		if (hex)
		{
			template = "0123456789abcdef";
			write(1, &template[str[i] / 16], 1);
			write(1, &template[str[i] % 16], 1);
		}
		else
		{
			if (is_char_non_printable(str[i]))
			{
				write(1, ".", 1);
			}
			else
			{
				write(1, &str[i], 1);
			}
		}
		i++;
	}
}

void	print_address(long addr)
{
	char	chars[16];
	char	*template;
	int		i;

	template = "0123456789abcdef";
	i = 15;
	while (addr >= 0)
	{
		chars[i] = template[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, chars, 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;
	int				index_add;

	i = 0;
	str = (char *)addr;
	while (i < size)
	{
		print_address((unsigned long)str);
		write(1, ":", 1);
		write(1, " ", 1);
		index_add = (size - (i + 16)) % 16;
		print_segment(str, index_add, 'y');
		write(1, " ", 1);
		print_segment(str, index_add, 'n');
		write(1, " ", 1);
		i += index_add;
		if (i < size)
			write(1, "\n", 1);
	}
	return (addr);
}

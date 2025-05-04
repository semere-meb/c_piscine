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
	if ((unsigned char)str <= 31 || (unsigned char)str == 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	print_segment(char *str, int size, int as_hex)
{
	int				i;
	char			*template;
	unsigned char	current_byte;

	i = 0;
	template = "0123456789abcdef";
	while (i < size)
	{
		if (as_hex)
		{
			current_byte = (unsigned char)str[i];
			write(1, &template[current_byte / 16], 1);
			write(1, &template[current_byte % 16], 1);
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

void	print_address(unsigned long addr)
{
	char	chars[16];
	char	*template;
	int		i;

	template = "0123456789abcdef";
	for (i = 0; i < 16; i++)
	{
		chars[i] = '0';
	}
	i = 15;
	while (addr > 0 && i >= 0)
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
	unsigned int	line_bytes;
	char			*current_line_addr;
	unsigned int	bytes_this_line;
	unsigned int	j;

	i = 0;
	line_bytes = 16;
	if (size == 0)
	{
		return (addr);
	}
	while (i < size)
	{
		current_line_addr = (char *)addr + i;
		if (i + line_bytes > size)
		{
			bytes_this_line = size - i;
		}
		else
		{
			bytes_this_line = line_bytes;
		}
		print_address((unsigned long)current_line_addr);
		write(1, ": ", 2);
		j = 0;
		while (j < bytes_this_line)
		{
			print_segment(current_line_addr + j, 1, 1);
			write(1, " ", 1);
			if (j == 7)
			{
				write(1, " ", 1);
			}
			j++;
		}
		while (j < line_bytes)
		{
			write(1, "  ", 2);
			write(1, " ", 1);
			if (j == 7)
			{
				write(1, " ", 1);
			}
			j++;
		}
		print_segment(current_line_addr, bytes_this_line, 0);
		i += bytes_this_line;
		if (i < size)
		{
			write(1, "\n", 1);
		}
	}
	return (addr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:38 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:38 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ascii(char c)
{
	char	*chars;

	chars = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &chars[c / 16], 1);
	write(1, &chars[c % 16], 1);
}

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

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_char_non_printable(*str))
		{
			print_ascii(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}

// int main(void) {
//     ft_putstr_non_printable("Coucou\ntu vas bien ?");
//     return (0);
// }

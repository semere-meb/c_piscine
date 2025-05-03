/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:55 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:55 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	parse_int(char *str)
{
	int	nbr;
	int	sign;
	int	i;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}

int	get_op(char *str)
{
	if (str[1] == '\0')
	{
		if (str[0] == '+')
			return (0);
		if (str[0] == '*')
			return (1);
		if (str[0] == '-')
			return (2);
		if (str[0] == '/')
			return (3);
		if (str[0] == '%')
			return (4);
		else
			return (-1);
	}
	else
		return (-1);
}

void	print_nbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		print_nbr(n / 10);
	c = '0' + (n % 10);
	write(1, &c, 1);
}

void	print_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	is_valid(char **argv)
{
	if (parse_int(argv[3]) == 0)
	{
		if (argv[2][0] == '/')
		{
			print_str("Stop : division by zero");
			return (0);
		}
		else if (argv[2][0] == '%')
		{
			print_str("Stop : modulo by zero");
			return (0);
		}
		return (1);
	}
	return (1);
}

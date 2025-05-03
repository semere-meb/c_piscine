/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:44 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:44 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

void	sort_args(char **argv, int count)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	write_ln(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	print_args(char **args, int count)
{
	int	index;

	index = 1;
	while (index < count)
	{
		write_ln(args[index]);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		sort_args(argv, argc);
		print_args(argv, argc);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smebraht <smebraht@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:52:42 by smebraht          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:42 by smebraht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_solution(char table[10][10])
{
	int	row;
	int	col;
	int	found;

	row = 0;
	while (row < 10)
	{
		col = 0;
		found = 0;
		while (col < 10)
		{
			if (table[row][col] == '1' && found == 0)
			{
				ft_putchar(col + '0');
				found = 1;
			}
			col++;
		}
		row++;
	}
	ft_putchar('\n');
}

int	is_safe(char table[10][10], int h, int v)
{
	int	i;
	int	j;

	i = h - 1;
	while (i >= 0)
	{
		if (table[i][v] == '1')
			return (0);
		i--;
	}
	i = h - 1;
	j = v - 1;
	while (i >= 0 && j >= 0)
	{
		if (table[i][j] == '1')
			return (0);
		i--;
		j--;
	}
	i = h - 1;
	j = v + 1;
	while (i >= 0 && j < 10)
	{
		if (table[i][j] == '1')
			return (0);
		i--;
		j++;
	}
	return (1);
}

void	solve(char table[10][10], int row, int *count)
{
	int	col;

	col = 0;
	while (col < 10)
	{
		if (is_safe(table, row, col))
		{
			table[row][col] = '1';
			solve(table, row + 1, count);
			table[row][col] = '0';
		}
		col++;
	}
	if (row == 10)
	{
		ft_print_solution(table);
		(*count)++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	table[10][10];
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			table[i][j] = '0';
			j++;
		}
		i++;
	}
	solve(table, 0, &count);
	return (count);
}

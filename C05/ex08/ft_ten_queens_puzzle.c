/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:42:38 by semebrah          #+#    #+#             */
/*   Updated: 2025/10/25 19:44:17 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int *board)
{
	int	i;

	i = 0;
	while (i < 10)
		write(1, (char []){'0' + board[i++]}, 1);
	write(1, "\n", 1);
}

int	is_safe(int *board, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i] == col)
			return (0);
		if (board[i] - i == col - row || board[i] + i == col + row)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *board, int row, int *count)
{
	int	col;

	if (row == 10)
	{
		print_solution(board);
		(*count)++;
		return ;
	}
	col = 0;
	while (col < 10)
	{
		if (is_safe(board, row, col))
		{
			board[row] = col;
			solve(board, row + 1, count);
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
	solve(board, 0, &count);
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("\n%d solutions\n", ft_ten_queens_puzzle());
}
*/

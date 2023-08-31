/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:34:44 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/20 22:18:14 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_check_rowright(int **board, int pos, int **ref, int size);
int		ft_check_rowleft(int **board, int pos, int **ref, int size);
int		ft_check_colup(int **board, int pos, int **ref, int size);
int		ft_check_coldown(int **board, int pos, int **ref, int size);
int		print_board(int **board, int size, int **conditions);
int		permute(int **board, int pos, int size, int **conditions);
void	create_malloc(int **board, int size);
void	error(void);

int	latin_square(int **board, int col, int row, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		if (board[row][i] == board[row][col] && i != col)
			return (0);
		i++;
	}
	j = 0;
	while (j < size)
	{
		if (board[j][col] == board[row][col] && j != row)
			return (0);
		j++;
	}
	return (1);
}

int	ft_check(int **board, int pos, int **ref, int size)
{
	int	c;
	int	col;
	int	row;

	row = pos / size;
	col = pos % size;
	c = 0;
	if (latin_square(board, col, row, size) == 0)
		return (0);
	c += ft_check_colup(board, col, ref, size);
	if (c == 0)
		return (0);
	c += ft_check_coldown(board, col, ref, size);
	if (c == 0)
		return (0);
	c += ft_check_rowleft(board, row, ref, size);
	if (c == 0)
		return (0);
	c += ft_check_rowright(board, row, ref, size);
	if (c == 0)
		return (0);
	if (c == 4 && row == size - 1 && col == size - 1)
		return (2);
	else
		return (1);
}

int	permute(int **board, int pos, int size, int **condiciones)
{
	int	value[2];
	int	col;
	int	row;

	row = pos / size;
	col = pos % size;
	value[0] = 0;
	if (col != size && row != size)
	{
		value[1] = 1;
		while (value[1] <= size && !value[0])
		{
			board[row][col] = value[1];
			if (ft_check(board, pos, condiciones, size) > 0)
				value[0] = permute(board, pos + 1, size, condiciones);
			value[1]++;
		}
		board[row][col] = 0;
	}
	else
	{
		value[0] = print_board(board, size, condiciones);
		board[row - 1][size - 1] = 0;
	}
	return (value[0]);
}

void	create_malloc(int **board, int size)
{
	int	i;

	if (board == NULL)
	{
		error();
		exit(1);
	}
	i = 0;
	while (i < size)
	{
		board[i] = (int *)malloc(size * sizeof(int));
		if (board[i] == NULL)
		{
			error();
			exit(1);
		}
		i++;
	}
}

void	rush01(int size, int **conditions)
{
	int	**board;
	int	sol_found;
	int	i;

	board = (int **)malloc(size * sizeof(int *));
	create_malloc(board, size);
	sol_found = permute(board, 0, size, conditions);
	i = 0;
	while (i < size)
	{
		free(board[i]);
		i++;
	}
	free(board);
	if (!sol_found)
		error();
}

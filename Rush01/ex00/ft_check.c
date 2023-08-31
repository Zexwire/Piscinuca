/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:35:05 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/20 21:35:07 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ensure(int *comp, int pos, int zero, int **ref)
{
	int	x;

	x = 0;
	if ((comp[0] <= ref[comp[1]][pos]) && (zero > 0))
	{
		x = 1;
	}
	else if (comp[0] == ref[comp[1]][pos] && zero == 0)
		x = 1;
	return (x);
}

int	ft_check_rowright(int **board, int pos, int **ref, int size)
{
	int	ctr[2];
	int	top;
	int	max;
	int	zero;

	ctr[0] = 0;
	top = size - 1;
	max = 0;
	zero = 0;
	while (top >= 0 && zero == 0)
	{
		if (board[pos][top] == 0)
			zero++;
		if (board[pos][top] > max)
		{
			ctr[0]++;
			max = board[pos][top];
		}
		top--;
	}
	if (zero > 0)
		return (1);
	ctr[1] = 3;
	return (ft_ensure(ctr, pos, zero, ref));
}

int	ft_check_rowleft(int **board, int pos, int **ref, int size)
{
	int	ctr[2];
	int	top;
	int	max;
	int	zero;

	ctr[0] = 0;
	top = 0;
	max = 0;
	zero = 0;
	while (top < size)
	{
		if (board[pos][top] == 0)
			zero++;
		else if (board[pos][top] > max)
		{
			ctr[0]++;
			max = board[pos][top];
		}
		top++;
	}
	ctr[1] = 2;
	return (ft_ensure(ctr, pos, zero, ref));
}

int	ft_check_colup(int **board, int pos, int **ref, int size)
{
	int	ctr[2];
	int	top;
	int	max;
	int	zero;

	ctr[0] = 0;
	top = 0;
	zero = 0;
	max = 0;
	while (top < size)
	{
		if (board[top][pos] == 0)
			zero++;
		if (board[top][pos] > max)
		{
			ctr[0]++;
			max = board[top][pos];
		}
		top++;
	}
	ctr[1] = 0;
	return (ft_ensure(ctr, pos, zero, ref));
}

int	ft_check_coldown(int **board, int pos, int **ref, int size)
{
	int	ctr[2];
	int	max;
	int	zero;
	int	top;

	ctr[0] = 0;
	zero = 0;
	max = 0;
	top = size - 1;
	while (top >= 0 && zero == 0)
	{
		if (board[top][pos] == 0)
			zero++;
		if (board[top][pos] > max)
		{
			ctr[0]++;
			max = board[top][pos];
		}
		top--;
	}
	if (zero > 0)
		return (1);
	ctr[1] = 1;
	return (ft_ensure(ctr, pos, zero, ref));
}

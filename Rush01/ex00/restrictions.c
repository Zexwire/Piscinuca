/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restrictions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:35:45 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/20 21:42:25 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	error(void);

int	check_sum_pair(int **board, int size, int *minmax_sum_pair)
{
	int	sum_pair;
	int	flag;
	int	j;
	int	k;

	flag = 0;
	j = 0;
	while (j < 4 && flag != 1)
	{
		k = 0;
		while (k <= size - 1 && flag != 1)
		{
			sum_pair = 0;
			sum_pair = board[j][k] + board[j + 1][k];
			if (sum_pair < minmax_sum_pair[0] || sum_pair > minmax_sum_pair[1])
				flag = 1;
			k++;
		}
		j += 2;
	}
	return (flag);
}

int	check_sum_edge(int **board, int size, int *minmax_sum_edge)
{
	int	flag;
	int	sum_edge;
	int	j;
	int	k;

	flag = 0;
	j = 0;
	while (j < 4 && flag != 1)
	{
		sum_edge = 0;
		k = 0;
		while (k <= size - 1 && flag != 1)
		{
			sum_edge += board[j][k];
			k++;
		}
		if (sum_edge < minmax_sum_edge[0] || sum_edge > minmax_sum_edge[1])
			flag = 1;
		j++;
	}
	return (flag);
}

int	check_range(int **board, int size)
{
	int	flag;
	int	minmax_sum_edge[2];
	int	minmax_sum_pair[2];

	flag = 0;
	minmax_sum_edge[0] = 1 + size;
	minmax_sum_edge[1] = (size * (size + 1)) / 2;
	minmax_sum_pair[0] = 3;
	minmax_sum_pair[1] = size + 1;
	flag = check_sum_edge(board, size, minmax_sum_edge);
	if (!flag)
		flag = check_sum_pair(board, size, minmax_sum_pair);
	if (flag)
	{
		error();
		exit(1);
	}
	return (flag);
}

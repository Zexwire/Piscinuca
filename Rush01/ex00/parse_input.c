/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:35:19 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/20 21:35:21 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	print_solution(char *str, int n);
int		check_str(char *s, int *error_flag);
int		check_length(char *str);
int		is_num(char str, int size);
void	error(void);
void	rush01(int size, int **conditions);
void	f_help(char *str);
int		check_range(int **board, int size);

int	parse_char2int(char *input_str, int **parsed_matrix, int size)
{
	int	i[4];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	i[3] = 1;
	while (input_str[i[0]] != '\0' && i[3])
	{
		i[3] = input_str[i[0]] == ' ';
		if (i[3])
			i[0]++;
		if (is_num(input_str[i[0]], size))
		{
			parsed_matrix[i[2]][i[1]] = input_str[i[0]] - '0';
			i[1]++;
			i[0]++;
			i[1] = i[1] % size;
			if (i[1] == 0)
				i[2]++;
			i[3] = 1;
		}
		else
			i[3] = 0;
	}
	return (i[0]);
}

void	malloc_conditions(char *str, int size, int **cond, int *error_flag)
{
	int	i;

	i = 0;
	while (i < size)
	{
		cond[i] = (int *)malloc(size * sizeof(int));
		if (cond[i] == NULL)
		{
			error();
			*error_flag = 1;
		}
		i++;
	}
	parse_char2int(str, cond, size);
	check_range(cond, size);
	rush01(size, cond);
	i = 0;
	while (i < 4)
	{
		free(cond[i]);
		i++;
	}
	free(cond);
}

void	parse_input(char *str, int *error_flag)
{
	int	**conditions;
	int	size;

	size = check_str(str, error_flag);
	if (size < 4 || size > 9)
		*error_flag = 1;
	if (!(*error_flag))
	{
		conditions = (int **)malloc(4 * sizeof(int *));
		if (conditions == NULL)
		{
			error();
			*error_flag = 1;
		}
		malloc_conditions(str, size, conditions, error_flag);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:35:12 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/20 21:35:14 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	error(void);
void	f_help(char *str);
void	parse_input(char *str, int *error_flag);

int	main(int argc, char *argv[])
{
	int	error_flag;

	error_flag = 0;
	if (argc == 2)
	{
		parse_input(argv[1], &error_flag);
	}
	else
		error();
	if (error_flag)
		error();
	return (0);
}

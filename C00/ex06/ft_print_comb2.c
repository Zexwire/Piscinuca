/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <mcarnere@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:30:41 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/16 22:34:34 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	res[5];
	int		i;
	int		j;

	res[2] = ' ';
	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (comb_dig[1] <= 99)
		{
			res[0] = '0' + (i / 10);
			res[1] = '0' + (i % 10);
			res[3] = '0' + (j / 10);
			res[4] = '0' + (j % 10);
			write(1, &res, 5);
			if (i != 98)
				write (1, ", ", 29);
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <mcarnere@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:30:41 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/15 15:49:17 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	res[3];

	res[0] = '0';
	while (res[0] <= '7')
	{
		res[1] = res [0] + 1;
		while (res[1] <= '8')
		{
			res[2] = res[1] + 1;
			while (res[2] <= '9')
			{
				write(1, &res, 3);
				res[2]++;
				if (res[0] != '7')
					write(1, ", ", 2);
			}
		res[1]++;
		}
	res[0]++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <mcarnere@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:51:15 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/13 20:30:06 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	number;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}	
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	number = '0' + (nb % 10);
	write(1, &number, 1);
}

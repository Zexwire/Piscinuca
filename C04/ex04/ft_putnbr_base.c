/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:22:35 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/27 03:58:05 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || *base == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	number;
	int		len;

	len = check_base(base);
	if (len > 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr == -2147483648)
			{
				ft_putnbr_base(-1 * (nbr / len), base);
				ft_putnbr_base(-1 * (nbr % len), base);
				return ;
			}
			nbr *= -1;
		}
		if (nbr / len != 0)
			ft_putnbr_base((nbr / len), base);
		number = base[nbr % len];
		write(1, &number, 1);
	}
}
/*
int	main(void)
{
	//ft_putnbr_base(-255, "0123456789ABCDEF");
	//ft_putnbr_base(255, "01234567");
	ft_putnbr_base(-2147483648, "0123456789");
	return (0);
}
*/

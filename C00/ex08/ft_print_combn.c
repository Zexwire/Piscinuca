/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:35:52 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/15 14:18:41 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	escribir(int n, int *a)
{
	int	i;

	if (a[n - 1] != (n -1))
		write(1, ", ", 2);
	i = 0;
	while (i < n)
	{
		ft_putchar(a[i] + '0');
		i++;
	}
}

void	incremento(int n, int *a)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (a[i] == max)
	{
		i--;
		max--;
	}
	a[i]++;
	while (i < n)
	{
		a[i + 1] = a[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	a[10];
	int	i;

	i = 0;
	while (i < n)
	{
		a[i] = i;
		i++;
	}
	escribir(n, a);
	while (a[0] != 10 - n)
	{
		if (a[n - 1] != 9)
			a[n - 1]++;
		else
			incremento (n, a);
		escribir (n, a);
	}
}

int	main(void)
{
	ft_print_combn(5);
	return (0);
}

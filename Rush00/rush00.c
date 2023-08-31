/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <mcarnere@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:24:50 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/13 14:14:59 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_line(char init, char mid, char final, int x);

void	rush(int x, int y)
{
	int	i;

	if (0 < y && 0 < x)
	{
		print_line('o', '-', 'o', x);
		i = 1;
		while (i < (y -1))
		{
			print_line('|', ' ', '|', x);
			i++;
		}
		if (y != 1)
			print_line('o', '-', 'o', x);
	}
}

void	print_line(char init, char mid, char final, int x)
{
	int	i;

	ft_putchar(init);
	i = 1;
	while (i < (x -1))
	{
		ft_putchar(mid);
		i++;
	}
	if (x != 1)
		ft_putchar(final);
	ft_putchar('\n');
}

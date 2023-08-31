/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:22:21 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/19 01:16:20 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	not_sorted;
	int	aux;

	not_sorted = size - 1;
	while (not_sorted > 0)
	{
		i = 0;
		while (i < not_sorted)
		{
			if (tab[i] > tab [i + 1])
			{
				aux = tab[i];
				tab[i] = tab [i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
		not_sorted--;
	}
}

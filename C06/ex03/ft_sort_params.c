/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:32:35 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/29 23:59:08 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}	
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (((unsigned char) *s1 - (unsigned char) *s2) != 0)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		not_sorted;
	char	*aux;

	not_sorted = size - 1;
	while (not_sorted > 0)
	{
		i = 0;
		while (i < not_sorted)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argv++;
		ft_sort_int_tab(argv, argc - 1);
		while (*argv)
		{
			ft_putstr(*argv);
			write(1, "\n", 1);
			argv++;
		}
	}
	return (0);
}

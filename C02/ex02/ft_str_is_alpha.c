/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:07:20 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/19 12:03:04 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (res > 0 && str[i] != '\0')
	{
		if ((str[i] < 'A' || 'Z' < str[i]) && (str[i] < 'a' || 'z' < str[i]))
			res = 0;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	char	*str = "wgrngogworgnworWJEOJOJ";
	char	*aux = "powwngow9085347";
	char 	i;
	char 	j;

	i = ft_str_is_alpha(str) + '0';
	j = ft_str_is_alpha(aux) + '0';
	write(1, &i, 1);
	write(1, &j, 1);
}
*/

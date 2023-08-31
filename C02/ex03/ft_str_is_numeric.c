/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 22:59:21 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/19 12:03:49 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (res > 0 && str[i] != '\0')
	{
		if (str[i] < '0' || '9' < str[i])
			res = 0;
		i++;
	}
	return (res);
}

/*
 *#include <unistd.h>
 *
int main(void)
{
    char    *str = "00rngogworgnworWJEOJOJ";
    char    *aux = "9085347";
    char    i;
    char    j;

    i = ft_str_is_numeric(str) + '0';
    j = ft_str_is_numeric(aux) + '0';
    write(1, &i, 1);
    write(1, &j, 1);
}
*/

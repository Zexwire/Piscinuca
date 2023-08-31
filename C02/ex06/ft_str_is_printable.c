/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:13:22 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/26 12:42:21 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (res > 0 && str[i] != '\0')
	{
		if (str[i] < ' ' || '~' < str[i])
			res = 0;
		i++;
	}
	return (res);
}
/*
int main(void)
{
    char    *str = "00rngogworgnworWJEOJOJ";
    char    *aux = "9085347  \n";
    char    i;
    char    j;

    i = ft_str_is_printable(str) + '0';
    j = ft_str_is_printable(aux) + '0';
    write(1, &i, 1);
    write(1, &j, 1);
	return (0);
}
*/

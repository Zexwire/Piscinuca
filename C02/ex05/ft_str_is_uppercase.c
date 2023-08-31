/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:10:42 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/19 12:04:56 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (res > 0 && str[i] != '\0')
	{
		if (str[i] < 'A' || 'Z' < str[i])
			res = 0;
		i++;
	}
	return (res);
}

/*
int main(void)
{
    char    *str = "GWGEGEWGWJEOJOJ";
    char    *aux = "asfaggFEOINFWO";
    char    i;
    char    j;

    i = ft_str_is_uppercase(str) + '0';
    j = ft_str_is_uppercase(aux) + '0';
    write(1, &i, 1);
    write(1, &j, 1);
}
*/

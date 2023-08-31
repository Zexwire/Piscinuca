/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:43:56 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/17 02:34:56 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*res;

	res = str;
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (res);
}
/*
int main(void)
{
    char    str[] = "00rngogworgnworWJEOJOJ\t";
    char    aux[] = "ABCDEFGhijklmnopqrstUVYZ\n";
    char    *string;
    char    *auxiliar;

    write(1, str, 24);
    write(1, aux, 27);
    string = ft_strlowcase(str);
    auxiliar = ft_strlowcase(aux);
    write(1, str, 24);
    write(1, aux, 27);
    return (0);
}
*/

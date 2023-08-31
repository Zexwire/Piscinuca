/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 00:29:01 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 12:50:35 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*res;

	res = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (res);
}
/*
int main(void)
{
    char    str[] = "00rngogworgnworWJEOJOJ\t";
    char    aux[] = "ABCDEFGhijklmnopqrstUVYZ\n";
	char 	*string;
	char	*auxiliar;

	write(1, str, 24);
    write(1, aux, 27);
	string = ft_strupcase(str);
	auxiliar = ft_strupcase(aux);
	write(1, str, 24);
    write(1, aux, 27);
	return (0);
}
*/

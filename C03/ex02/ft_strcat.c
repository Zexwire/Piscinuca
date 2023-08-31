/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 03:18:39 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 15:25:46 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}
/*
int main(void)
{
    char    str[60] = "ASDFGHJKLasdfghjkl";
    char    aux[60] = "asdfghjklASDFGHJKL";
    char    equ[60] = "asdfghjklASDFGHJKL";
	char	*ptr;
    char    nwln = '\n';

    ptr = ft_strcat(str, aux);
    write(1, ptr, 36);
	write(1, &nwln, 1);

    ptr = ft_strcat(str, equ);
    write(1, ptr, 36);
    write(1, &nwln, 1);

    ptr = ft_strcat(equ, aux);
    write(1, ptr, 36);
    write(1, &nwln, 1);

    return (0);
}
*/

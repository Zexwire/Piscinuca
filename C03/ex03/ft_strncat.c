/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:02:35 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/22 12:13:54 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*res;
	unsigned int	i;

	res = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (res);
}
/*
int main(void)
{
    char   	str[60] = "Pin Pon  ";
    char    aux[60] = "con jamón ";
    char    equ[60] = "eneryeti de coco";
    char    *ptr;
    char    nwln = '\n';

    ptr = ft_strncat(str, aux, 15);
    write(1, ptr, 60);
    write(1, &nwln, 1);

    ptr = ft_strncat(str, equ, 20);
    write(1, ptr, 60);
    write(1, &nwln, 1);

    ptr = ft_strncat(equ, aux, 9);
    write(1, ptr, 60);
    write(1, &nwln, 1);

    return (0);
}
*/

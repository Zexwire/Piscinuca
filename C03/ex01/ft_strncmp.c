/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 03:08:08 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 15:22:56 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				res;
	unsigned int	i;

	res = 0;
	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (((unsigned char) *s1 - (unsigned char) *s2) != 0)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		s1++;
		s2++;
		i++;
	}
	return (res);
}
/*
void    ft_putnbr(int nb)
{
    char    number;

    if (nb < 0)
    {
        if (nb == -2147483648)
        {
            write(1, "-2147483648", 11);
            return ;
        }
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb / 10 != 0)
        ft_putnbr(nb / 10);
    number = '0' + (nb % 10);
    write(1, &number, 1);
}

int main(void)
{
    char    *str = "asdfghjklAsdfghjkl";
    char    *aux = "asdfghjklaSDFGHJKL";
    char    *equ = "asdfghjklaSDFGHJKL";
    char    nwln = '\n';

    ft_putnbr(ft_strncmp(str, aux, 9));
    write(1, &nwln, 1);

    ft_putnbr(ft_strncmp(aux, str, 9));
    write(1, &nwln, 1);

	ft_putnbr(ft_strncmp(str, aux, 12));
    write(1, &nwln, 1);

	ft_putnbr(ft_strncmp(aux, str, 15));
    write(1, &nwln, 1);

    ft_putnbr(ft_strncmp(equ, aux, 15));
    write(1, &nwln, 1);

    return (0);
}
*/

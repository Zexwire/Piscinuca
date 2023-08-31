/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:44:01 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 17:37:01 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//int	ft_atoi_base(char *str, char *base, int base_len);

//int	check_base2(char *base);

char	*ft_strcat_char(char *dest, char src)
{
	char	*res;

	res = dest;
	while (*dest)
		dest++;
	*dest = src;
	dest++;
	*dest = '\0';
	return (res);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || *base == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_strnbr_base(int nbr, char *base, char **number, int len)
{
	char	c;

	if (nbr < 0)
	{
		*number = ft_strcat_char(*number, '-');
		if (nbr == -2147483648)
		{
			ft_strnbr_base(-1 * (nbr / len), base, number, len);
			ft_strnbr_base(-1 * (nbr % len), base, number, len);
			return ;
		}
		nbr *= -1;
	}
	if (nbr / len != 0)
		ft_strnbr_base((nbr / len), base, number, len);
	c = base[nbr % len];
	*number = ft_strcat_char(*number, c);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		num;
	int		len_from;
	int		len_to;

	len_from = check_base2(base_from);
	len_to = check_base(base_to);
	if (len_from < 2 || len_to < 2)
		return (NULL);
	res = (char *) malloc(34 * sizeof (char));
	if (res == NULL)
		return (NULL);
	num = ft_atoi_base(nbr, base_from, len_from);
	ft_strnbr_base(num, base_to, &res, len_to);
	return (res);
}
/*
#include <stdio.h>

int main(void) {
    // Test with a number in base 2 and convert it to base 10
    char *nbr1 = "-2147483648";
    char *base_from1 = "0123456789";
    char *base_to1 = "01";
    char *converted1 = ft_convert_base(nbr1, base_from1, base_to1);
    printf("%s\n", converted1);
    free(converted1);

    // Test with a number in base 10 and convert it to base 16
    char *nbr2 = "45";
    char *base_from2 = "0123456789";
    char *base_to2 = "0123456789abcdef";
    char *converted2 = ft_convert_base(nbr2, base_from2, base_to2);
    printf("%s\n", converted2);
    free(converted2);

	char *nbr3 = "5465+4564";
    char *base_from3 = "0123456789";
    char *base_to3 = "0123456789abcdef";
    char *converted3 = ft_convert_base(nbr3, base_from3, base_to3);
    printf("%s\n", converted3);
    free(converted3);

    return 0;
}
*/

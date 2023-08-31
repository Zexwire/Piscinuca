/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:21:25 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/27 01:22:17 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_str(char *str, char *base)
{
	int	res;
	int	i;

	res = -1;
	i = 0;
	while (res < 0 && base[i])
	{
		if (*str == base[i])
			res = i;
		i++;
	}
	return (res);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || *base == '-' || base[i] == ' ')
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

int	calculation(char *str, char *base, int len)
{
	int	res;
	int	pos;

	res = 0;
	pos = check_str(str, base);
	while (pos >= 0)
	{
		res *= len;
		res += pos;
		str++;
		pos = check_str(str, base);
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	mod;
	int	len;

	res = 0;
	mod = 1;
	len = check_base(base);
	if (len > 1)
	{
		while (*str == ' ' || (*str > 8 && *str < 14))
			str++;
		if (*str == '+')
			str++;
		else if (*str == '-')
		{
			mod *= -1;
			str++;
		}
		res = calculation(str, base, len);
	}
	return (res * mod);
}
/*
#include <stdio.h>
#include <assert.h>

void test_myAtoi() {
    assert(ft_atoi_base("123", "0123456789") == 123);
    assert(ft_atoi_base("-1111011", "01") == -123);
    assert(ft_atoi_base("   -123f", "0123456789abcdef") == -4671);
    assert(ft_atoi_base("123abc", "01234567") == 83);
    assert(ft_atoi_base("", "0123456") == 0);
    //assert(ft_atoi(NULL) == 0);
    printf("All test cases pass\n");
}

int main() {
    test_myAtoi();
    return 0;
}
*/

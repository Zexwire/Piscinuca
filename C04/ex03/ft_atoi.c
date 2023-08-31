/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:30:52 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/27 04:07:04 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	mod;

	res = 0;
	mod = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			mod *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		res *= 10;
		res += (*str - '0');
		str++;
	}
	return (res * mod);
}
/*
#include <stdio.h>
#include <assert.h>

void test_myAtoi() {
    assert(ft_atoi("123") == 123);
    assert(ft_atoi("-123trhthr") == -123);
    assert(ft_atoi("   -+-123") == 123);
    assert(ft_atoi("123abc") == 123);
    assert(ft_atoi("") == 0);
    //assert(ft_atoi(NULL) == 0);
    printf("All test cases pass\n");
}

int main() {
    test_myAtoi();
    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:56:40 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 19:03:02 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = 1;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
#include <assert.h>
#include <stdio.h>

void test_power() {
    assert(ft_iterative_power(0, 3) == 0);
    assert(ft_iterative_power(1, -2) == 0);
    assert(ft_iterative_power(2, 10) == 1024);
    assert(ft_iterative_power(-1, 4) == 1);
    assert(ft_iterative_power(0, 0) == 1);
    printf("All test cases pass\n");
}

int main() {
    test_power();
    return 0;
}
*/

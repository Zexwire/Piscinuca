/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:07:26 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 19:05:16 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		res = nb * (ft_recursive_power(nb, power - 1));
	return (res);
}
/*
#include <assert.h>
#include <stdio.h>

void test_power() {
    assert(ft_recursive_power(0, 3) == 0);
    assert(ft_recursive_power(1, -2) == 0);
    assert(ft_recursive_power(2, 5) == 32);
    assert(ft_recursive_power(-1, 4) == 1);
    assert(ft_recursive_power(0, 0) == 1);
    printf("All test cases pass\n");
}

int main() {
    test_power();
    return (0);
}
*/

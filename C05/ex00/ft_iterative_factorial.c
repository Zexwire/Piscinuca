/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:59:22 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 01:49:02 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
#include <assert.h>
#include <stdio.h>

void test_factorial() {
    assert(ft_iterative_factorial(0) == 1);
    assert(ft_iterative_factorial(1) == 1);
    assert(ft_iterative_factorial(5) == 120);
    assert(ft_iterative_factorial(-1) == 0);
    printf("All test cases pass\n");
}

int main() {
    test_factorial();
    return 0;
}
*/

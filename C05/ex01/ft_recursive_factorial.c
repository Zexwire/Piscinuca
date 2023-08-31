/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:23:21 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 19:02:06 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		res = 1;
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
/*
#include <assert.h>
#include <stdio.h>

void test_factorial() {
    assert(ft_recursive_factorial(0) == 1);
    assert(ft_recursive_factorial(1) == 1);
    assert(ft_recursive_factorial(8) == 40320);
    assert(ft_recursive_factorial(-1) == 0);
	printf("All test cases pass\n");
}

int main() {
    test_factorial();
    return 0;
}
*/

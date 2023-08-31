/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:38:31 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 19:33:01 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index < 0)
		return (-1);
	if (index < 2)
		res = index;
	else
		res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (res);
}
/*
#include <assert.h>
#include <stdio.h>

void test_fibonacci() {
    assert(ft_fibonacci(2) == 1);
    assert(ft_fibonacci(5) == 5);
    assert(ft_fibonacci(-13) == -1);
    assert(ft_fibonacci(9) == 34);
    assert(ft_fibonacci(0) == 0);
    printf("All test cases pass\n");
}

int main() {
    test_fibonacci();
    return (0);
}
*/

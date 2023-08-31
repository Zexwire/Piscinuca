/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:57:10 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/28 14:10:29 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / i) && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int test_cases[] = {-1, 0, 1, 2, 3, 4, 9, 10, 17,  7919, 2147483647};
	int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

	for(int i = 0; i < num_tests; i++)
	{
		int num = test_cases[i];
		if(ft_is_prime(num))
            printf("%d is a prime number.\n", num);
		else
			printf("%d is not a prime number.\n", num);
	}

    return (0);
}
*/

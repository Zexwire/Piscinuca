/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:40:32 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/28 14:11:36 by mcarnere         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	res;

	if (nb <= 2)
		return (2);
	res = nb;
	while (ft_is_prime(res) == 0)
		res++;
	return (res);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
    // Test with smallest positive integer
    printf("Next prime after 1 is: %d\n", ft_find_next_prime(1));

    // Test with a prime number
    printf("Next prime after 3 is: %d\n",ft_find_next_prime(3));

    // Test with a non-prime number
    printf("Next prime after 4 is: %d\n", ft_find_next_prime(4));

    // Test with the largest possible integer
    printf("Next prime after INT_MAX is: %d\n", ft_find_next_prime(2143483674));

	// Test with the largest possible integer
    printf("Next prime after INT_MIN is: %d\n", ft_find_next_prime(INT_MIN));

    return (0);
}
*/

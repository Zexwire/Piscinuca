/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:17:39 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/28 13:48:31 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	if (nb <= 0)
		return (0);
	res = 1;
	while (res < (nb / res) && res < 46341)
		res++;
	if (res * res == nb)
		return (res);
	else
		return (0);
}
/*
#include <stdio.h>

int main() {
    // Test cases for the limit cases:

    // Test with negative number
    printf("Square root of -5 is: %d\n", ft_sqrt(-5));  // Expected output: 0

    // Test with zero
    printf("Square root of 0 is: %d\n", ft_sqrt(0));  // Expected output: 0

    // Test with the maximum integer that can still
	// º have its square root as an integer
    printf("Square root of 2147395600 is: %d\n", ft_sqrt(2147395600)); 
   	// Expected output: 46340

    // Test with the maximum integer that can't have 
	// its square root as an integer
    printf("Square root of 2147483647 is: %d\n", ft_sqrt(2147483647)); 
   	// Expected output: 0

    // Test cases for the normaºl cases:

    // Test with perfect squares
    printf("Square root of 1 is: %d\n", ft_sqrt(1));  // Expected output: 1
    printf("Square root of 4 is: %d\n", ft_sqrt(4));  // Expected output: 2
    printf("Square root of 9 is: %d\n", ft_sqrt(9));  // Expected output: 3
    printf("Square root of 81 is: %d\n", ft_sqrt(81));  // Expected output: 4

    // Test with non-perfect squares
    printf("Square root of 2 is: %d\n", ft_sqrt(2));  // Expected output: 0
    printf("Square root of 3 is: %d\n", ft_sqrt(3));  // Expected output: 0
    printf("Square root of 5 is: %d\n", ft_sqrt(5));  // Expected output: 0

    return (0);
}
*/

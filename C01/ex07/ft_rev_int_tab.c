/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:10:05 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/16 19:26:30 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}
/*
int main() {
    int test1[] = {1, 2, 3, 4, 5};
    int test2[] = {10, 20, 30, 40, 50, 60};

    int size1 = sizeof(test1) / sizeof(test1[0]);
    int size2 = sizeof(test2) / sizeof(test2[0]);

    printf("Original test1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", test1[i]);
    }
    printf("\n");

    ft_rev_int_tab(test1, size1);

    printf("Reversed test1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", test1[i]);
    }
    printf("\n\n");

    // Similar test cases for the other arrays...
	
	printf("Original test2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", test2[i]);
    }
    printf("\n");

    ft_rev_int_tab(test2, size2);

    printf("Reversed test1: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", test2[i]);
    }
    printf("\n\n");

    return 0;
}
*/

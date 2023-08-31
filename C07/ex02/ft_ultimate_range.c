/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:20:12 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 02:45:22 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*aux;
	int	size;

	size = max - min;
	if (size < 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc(size * sizeof (int));
	if (*range == 0)
		return (-1);
	aux = *range;
	while (min < max)
	{
		*aux = min;
		min++;
		aux++;
	}
	return (size);
}
/*
#include <stdio.h>

int main(void)
{
    int min = 1;
    int max = 5;
    int *res = NULL;
    int size;
    int i;

    size = ft_ultimate_range(&res, min, max);

    if (res != NULL) {
        for (i = 0; i < size; i++) {
            printf("%d ", res[i]);
        }
    } else {
        printf("The function returned NULL");
    }
    free(res); // free the dynamically allocated memory
    return 0;
}
*/

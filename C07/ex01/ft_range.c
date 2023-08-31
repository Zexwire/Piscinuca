/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:51:28 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 02:38:52 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	*aux;
	int	range;

	range = max - min;
	if (range < 0)
		return (0);
	aux = (int *) malloc(range * sizeof (int));
	if (aux == 0)
		return (0);
	res = aux;
	while (min < max)
	{
		*aux = min;
		min++;
		aux++;
	}
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
    int min = 1;
    int max = 5;
    int* res;
    int i;

    res = ft_range(min, max);

    if (res != 0) {
        for (i = 0; i < max - min; i++) {
            printf("%d ", res[i]);
        }
    } else {
        printf("The function returned NULL");
    }
    free(res); // free the dynamically allocated memory
    return 0;
}
*/

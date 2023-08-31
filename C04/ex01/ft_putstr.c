/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:05:53 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/22 18:10:31 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main() {
    char test1[] = "Hello, World!";
    char test2[] = "This is a test.";
    char test3[] = "";

    ft_putstr(test1);
    printf("\n");

    ft_putstr(test2);
    printf("\n");

    ft_putstr(test3);
    printf("\n");

    return (0);
}
*/

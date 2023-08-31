/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:12:53 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/26 12:43:35 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	char	represent[3];

	represent[0] = '\\';
	while (*str)
	{
		if (' ' > *str || *str > '~')
		{
			represent[1] = "0123456789abcdef"[(*str >> 4) & 0x0F];
			represent[2] = "0123456789abcdef"[*str & 0x0F];
			write(1, represent, 3);
		}
		else
			write(1, str, 1);
		str++;
	}
}
/*
int main() {
    char test1[] = "Hello, World!";
    char test2[] = "This\nis\ta test.";
    char test3[] = "\x01\x1F\x7F";

    printf("Original test1: %s\n", test1);
    ft_putstr_non_printable(test1);
    printf("\n");

    printf("Original test2: %s\n", test2);
    ft_putstr_non_printable(test2);
    printf("\n");

    printf("Original test3: ");
    for (unsigned long i = 0; i < sizeof(test3); i++) {
        printf("\\x%02x", (unsigned char)test3[i]);
    }
    printf("\n");
    ft_putstr_non_printable(test3);
    printf("\n");

    return 0;
}
*/

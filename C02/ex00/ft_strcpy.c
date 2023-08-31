/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:48:44 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/15 23:04:53 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*dest)
	{
		*dest = '\0';
		dest++;
	}
	return (res);
}

/*
 *#include <stdio.h>
 *
int main() {
    char source[] = "Hello, World!";
    char destination[20]; 
	
    // Copy the source string to the destination using ft_strcpy
    ft_strcpy(destination, source);

    // Print the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}
*/

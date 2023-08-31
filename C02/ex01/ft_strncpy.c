/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:52:09 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 12:56:11 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*res;
	unsigned int		i;

	res = dest;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (res);
}

/*
 *#include <stdio.h>
 *
int main() {
    char source[] = "Hello, World!";
    char destination[20];  // Make sure the destination array

    // Copy the source string to the destination using ft_strcpy
    ft_strncpy(destination, source);

    // Print the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:53:50 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 15:43:30 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*
int main(void)
{
    char dest1[10];
    char dest2[10];
    char dest3[30];
    char *src1 = "Hello";
    char *src2 = "This is a longer string";

    // Test case 1: Regular copy within destination size
    size_t len1 = ft_strlcpy(dest1, src1, sizeof(dest1));
    printf("dest1 after copy: %s, Length: %zu\n", dest1, len1);

    // Test case 2: Truncation due to small destination size
    size_t len2 = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("dest2 after copy: %s, Length: %zu\n", dest2, len2);

    // Test case 3: Copy with larger destination size
    size_t len3 = ft_strlcpy(dest3, src2, sizeof(dest3));
    printf("dest3 after copy: %s, Length: %zu\n", dest3, len3);

    return (0);
}
*/

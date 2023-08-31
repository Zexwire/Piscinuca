/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:57:55 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 04:38:47 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i) && size > 0)
	{
		i++;
		size--;
	}
	j = 0;
	while (*(src + j) && size > 1)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
		size--;
	}
	if (size >= 1)
		*(dest + i) = '\0';
	while (*(src + j))
	{
		i++;
		j++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int main(void) 
{
    char dest1[15] = "Hello, ";
    char src1[] = "World!";
    
    char dest2[15] = "This is a ";
    char src2[] = "test.";
    
    char dest3[5] = "Hi";
    char src3[] = " there!";

    char dest11[15] = "Hello, ";
    char src11[] = "World!";

    char dest22[15] = "This is a ";
    char src22[] = "test.";

    char dest33[5] = "Hi";
    char src33[] = " there!";
    
    unsigned int size1 = sizeof(dest1);
    unsigned int size2 = sizeof(dest2);
    unsigned int size3 = sizeof(dest3);

	unsigned int size11 = sizeof(dest11);
    unsigned int size22 = sizeof(dest22);
    unsigned int size33 = sizeof(dest33);

    printf("Original dest1: %s\n", dest1);
    unsigned int len1 = ft_strlcat(dest1, src1, size1);
    printf("Modified dest1: %s, Length: %u\n\n", dest1, len1);

    printf("Original dest11: %s\n", dest11);
    unsigned int len11 = strlcat(dest11, src11, size11);
    printf("Modified dest11: %s, Length: %u\n\n", dest11, len11);

    printf("Original dest2: %s\n", dest2);
    unsigned int len2 = ft_strlcat(dest2, src2, size2);
    printf("Modified dest2: %s, Length: %u\n\n", dest2, len2);

	printf("Original dest22: %s\n", dest22);
    unsigned int len22 = strlcat(dest22, src22, size22);
    printf("Modified dest22: %s, Length: %u\n\n", dest22, len22);
    
    printf("Original dest3: %s\n", dest3);
    unsigned int len3 = ft_strlcat(dest3, src3, size3);
    printf("Modified dest3: %s, Length: %u\n\n", dest3, len3);

	printf("Original dest33: %s\n", dest33);
    unsigned int len33 = strlcat(dest33, src33, size33);
    printf("Modified dest33: %s, Length: %u\n\n", dest33, len33);

    return 0;
}
*/

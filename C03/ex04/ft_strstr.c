/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:30:52 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 04:38:03 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	if (to_find[j] == '\0')
		return (str);
	return (0);
}
/*
#include <stdio.h>

int main(void) {
    char *haystack1 = "Hello, World!";
    char *needle1 = "World";

    char *haystack2 = "Strtrtetest";
    char *needle2 = "test";

    char *haystack3 = "Hello";
    char *needle3 = "";

    char *haystack4 = "abcdefg";
    char *needle4 = "xyz";

    char *haystack5 = "xyz";
    char *needle5 = "xyz";

    char *result1 = ft_strstr(haystack1, needle1);
    if (result1)
        printf("Needle found in haystack1: %s\n", result1);
    else
        printf("Needle not found in haystack1.\n");

    char *result2 = ft_strstr(haystack2, needle2);
    if (result2)
        printf("Needle found in haystack2: %s\n", result2);
    else
        printf("Needle not found in haystack2.\n");

    char *result3 = ft_strstr(haystack3, needle3);
    if (result3)
        printf("Needle found in haystack3: %s\n", result3);
    else
        printf("Needle not found in haystack3.\n");

    char *result4 = ft_strstr(haystack4, needle4);
    if (result4)
        printf("Needle found in haystack4: %s\n", result4);
    else
        printf("Needle not found in haystack4.\n");

    char *result5 = ft_strstr(haystack5, needle5);
    if (result5)
        printf("Needle found in haystack5: %s\n", result5);
    else
        printf("Needle not found in haystack5.\n");

    return 0;
}
*/

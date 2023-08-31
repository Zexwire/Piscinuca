/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:45:43 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 05:49:29 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcat_sep(int size, char **res, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		*res = ft_strcat(*res, *strs);
		*res = ft_strcat(*res, sep);
		strs++;
		++i;
	}
	*res = ft_strcat(*res, *strs);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	if (size == 0)
	{
		res = (char *) malloc(sizeof (char));
		*res = '\0';
		return (res);
	}
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		++i;
	}
	len += (ft_strlen(sep) * (size - 1));
	res = (char *) malloc((len + 1) * sizeof (char));
	if (res == NULL)
		return (NULL);
	ft_strcat_sep(size, &res, strs, sep);
	res[len] = '\0';
	return (res);
}
/*
#include <stdio.h>

int main(void) {
    char *strings[] = {"Hello", "World", "How", "Are", "You"};
    int size = sizeof(strings) / sizeof(strings[0]);
    char *sep = " ";
    char *joined = ft_strjoin(size, strings, sep);

    printf("%s\n", joined);
    free(joined);

    return 0;
}
*/

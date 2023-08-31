/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 02:48:41 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/24 15:19:48 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (((unsigned char) *s1 - (unsigned char) *s2) != 0)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
int	main(void)
{
	char	*str = "asdFghJkl";
	char	*aux = "asdfghjkl";
	char	*equ = "asdfghjkl";

	printf("%d\n", ft_strcmp(str, aux));

	printf("%d\n", ft_strcmp(aux, str));

	printf("%d\n", ft_strcmp(equ, aux));

	return (0);
}
*/

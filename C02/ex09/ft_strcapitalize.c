/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:46:42 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/27 00:32:33 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	is_alphanum(char *str)
{
	if ('0' <= *str && *str <= '9')
		return (0);
	else if ('A' <= *str && *str <= 'Z')
		return (0);
	else if ('a' <= *str && *str <= 'z')
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	char	*res;

	res = str;
	while (*str)
	{
		if (is_alphanum(str) == 1 && *(str + 1) != '\0')
			str++;
		if ('a' <= *str && *str <= 'z')
			*str -= 32;
		while (is_alphanum(str) == 0 && *(str + 1) != '\0')
		{
			str++;
			if ('A' <= *str && *str <= 'Z')
				*str += 32;
		}
		str++;
	}
	return (res);
}
/*
int main(void)
{
    char    str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+e";
    char    aux[] = "\n ABCDEFGh ijklmnopqr stUVYZ\n ";
    char    *string;
    char    *auxiliar;

    write(1, str, 61);
    write(1, aux, 30);
    string = ft_strcapitalize(str);
    auxiliar = ft_strcapitalize(aux);
    write(1, str, 61);
    write(1, aux, 30);
    return (0);
}
*/

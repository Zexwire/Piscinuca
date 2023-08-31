/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:34:57 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/20 21:41:31 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	error(void)
{
	write(1, "Error\n", 6);
}

int	str_size(char *str)
{
	int	size;

	size = 0;
	while (str[0] != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

int	is_num(char str, int size)
{
	int	ret;

	ret = 1;
	if (!((str >= '1') && (str <= ('0' + size))))
	{
		ret = 0;
	}
	return (ret);
}

int	check_str(char *s, int *error_flag)
{
	int	i;
	int	size;

	size = 0;
	if (!(*error_flag))
	{
		if ((str_size(s) + 1) % 8 == 0)
		{
			size = (str_size(s) + 1) / 8;
			if (is_num(s[0], size))
			{
				i = 1;
				while (s[i] != '\0')
				{
					if (!((s[i] == ' ') && is_num(s[i + 1], size)))
						*error_flag = 1;
					i = i + 2;
				}
			}
		}
		else
			*error_flag = 1;
	}
	return (size);
}

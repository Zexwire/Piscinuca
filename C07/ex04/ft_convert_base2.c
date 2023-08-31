/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:44:16 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/31 14:46:13 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base2(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_search_char(char ch, char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int	ft_calculations(char *str, char *base, int base_len)
{
	int	idx;
	int	result;

	result = 0;
	while (*str && ft_search_char(*str, base))
	{
		idx = get_value(*str, base);
		if (idx == -1)
			return (0);
		result = result * base_len + idx;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base, int base_len)
{
	int	result;
	int	neg;

	neg = 1;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -neg;
		str++;
	}
	result = ft_calculations(str, base, base_len);
	return (result * neg);
}

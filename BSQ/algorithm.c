/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarnere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:10:14 by mcarnere          #+#    #+#             */
/*   Updated: 2023/08/28 19:10:16 by mcarnere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FAIL -1
#define SUCCESS 0
# define ERROR "map error\n"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_data
{
	int		depth;
	int		length;
	char	cell_empty;
	char	cell_obs;
	char	cell_fill;
}	t_data;

typedef struct s_map
{
	t_data	params;
	int		**value;
}	t_map;

int	*ft_linedup(int *src)
{
	int	i;
	int	*aux;
	int	*res;

	i = 0;
    while (src[i] != '\0')
        i++;
	aux = (int *) malloc((i + 1) * sizeof (int));
	res = aux;
	while (*src)
	{
		*aux = *src;
		aux++;
		src++;
	}
	*aux = '\0';
	return (res);
}

t_map	new_map(t_data params, int **tab)
{
	t_map	new;
	int		i;

	new.value = (int **) malloc(params.depth * sizeof(int));
	i = 0;
	while(tab[i])
	{
		new.value[i] = ft_linedup(tab[i]);
		++i; 
	}
	return (new);
}

//open
int	open_map(char *path)
{
	int fd;

	fd = open(path, O_RDWR);
	return (fd);
}

//close
int	create_map(char *path, t_map map)
{
	int fd;

}

//read ¡¡¡¡¡¡¡¡¡


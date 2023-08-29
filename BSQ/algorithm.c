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
//FIXME: preguntar si puede haber espacios antes del número
int	ft_natoi(char *str, int *num, int size)
{
	int i;

	*num = 0;
	while (*str != '\0' && (*str == ' ' || (*str >= 9 && *str <= 13)))
		++str;
	if (*str != '\0' && (*str == '-' || *str == '+'))
		return (FAIL);
	i = 0;
	while ((*str && *str >= '0' && *str <= '9') && i < size)
	{
		*num *= 10;
		*num += *str - '0';
		++str;
		++i;
	}
	if ((*str && (*str < '0' || *str > '9')) && i < size)
		return (FAIL);
	return (SUCCESS);
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

void	free_map(t_map *map)
{
	int i;

	i = 0;
	while(map->value[i])
	{
		free(map->value[i]);
		++i;
	}
	free(map->value);
}

int	get_largest_square(t_map *map, int **square_coords)
{
	//aplicar down up

	//buscar el más grande

}

int	paint_largest_square(char *map_path, int **square_coords)
{
	//volvera abrir el archivo || dejarlo abierto
	//y pintar el cuadrado
}

//open
int	open_map(char *path)
{
	int fd;

	fd = open(path, O_RDWR);
	return (fd);
}

//close
int	treat_map(char *path, t_map *map)
{
	int fd;

	fd = open_map(path);
	if (fd == FAIL)
		return (FAIL);
	if (read_map(fd, map) == FAIL)
		return (FAIL);
	close(fd);
	return (SUCCESS);
}
//comprobar que no faltan y que no sean idénticos
int	check_params(t_data *params)
{

}
//pasar del buffer de char a buffer de ints
int	*translate_buffer(char *data_buffer)
{

}

//read ¡¡¡¡¡¡¡¡¡
int read_map(int fd, t_map *map)
{
	int		i;
	char	c;
	int		aux;
	char	*data_buffer;
	t_data	params;

	aux = read(fd, &c, 1);
	i = 0;
	while (aux != 0 && c != '\n')
	{
		if (c < ' ' || 126 < c)
			return (FAIL);
		data_buffer[i] = c;
		aux = read(fd, &c, 1);
		++i;
	}
	params.cell_empty = data_buffer[i - 3];
	params.cell_obs = data_buffer[i -2];
	params.cell_fill = data_buffer[i - 1];
	if (ft_natoi(data_buffer, params.depth, i - 3) == FAIL
		|| check_params(&params) == FAIL)
		return (FAIL);
	i = 0;
	//procesar primera linea para length
	while (aux != 0)
	{
		if (c == '\n')
		{
			aux = read(fd, &c, 1);
			continue ;
		}
		//procesar el resto, con condiciones de FAIL
		map->value[i] = translate_buffer(data_buffer);
		i++;
	}
	return (SUCCESS);
}

//read input válido de mapa (una vez sacado como leer el argumento estaría)
int read_input(t_map *map)
{

}


void	compute_arguments(char *map_path ,t_map *map, int **square_coords)
{
	if (treat_map(map_path, map) == FAIL)
		ft_putstr(ERROR);
	if (get_largest_square(map, square_coords) == FAIL)
		ft_putstr(ERROR);
	//Se pintan en el archivo o se pintan en pantalla?
	if (paint_largest_square(map_path, square_coords) == FAIL)
		ft_putstr(ERROR);
}

//main
int	main(int argc, char **argv)
{
	t_map	map;
	char	*map_path;
	int		*square_coords;

	if (argc == 1)
	{
		read_input(&map);
		//supongo que aqui solo quieren que pintes por pantalla
		compute_arguments(map_path, &map, &square_coords);
	}
	else
	{
		while (*argv)
		{
			map_path = *argv;
			compute_arguments(map_path, &map, &square_coords);
			argv++;
		}
	}
	free_map(&map);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguerra- <lylian.gr@protonmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:25:40 by lguerra-          #+#    #+#             */
/*   Updated: 2023/08/30 19:26:07 by mmorot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# define BUFFER 1024

// type of case
enum e_map_type
{
	EMPTY = 0,
	OBSTACLE = -1,
	UNKNOWN = -2
};

// type of print
enum e_print_type
{
	PRINT_MAP = 0,
	PRINT_ALGO = 1,
	PRINT_BASE = 2
};

// structure for a single case in the map
typedef struct s_map_entry
{
	char	show;
	char	base;
	int		x;
	int		y;
	int		algo;
	int		set;
}	t_map_entry;

// structure for best square
typedef struct s_best
{
	int	x;
	int	y;
	int	size;
}	t_best;

// structure for the size of the map or x y coords
typedef struct s_size
{
	int	height;
	int	width;
}	t_size;

// structure for the map
typedef struct s_map
{
	t_map_entry	*entries;
	char		empty;
	char		obstacle;
	char		full;
	int			height;
	int			width;
}	t_map;

// init
void		init_coords(t_size *coords, int x, int y);
void		init_best(t_best *best, int x, int y, int size);

//file parsing

char		*file_parsing(char *path);

//check map

t_map		*check_map(char *content);

// resolve a map
int			map_resolve(t_map *map);

// map functions
t_map_entry	*get_map_entry(t_map *map, int x, int y);
t_map_entry	**get_around_index(t_map *map, int x, int y);
t_map		*map_create(t_size size, char empty, char obstacle, char full);
int			map_insert(t_map *map, int x, int y, char base);
void		map_destroy(t_map *map);

// print functions
void		print_map(t_map *map, enum e_print_type type);

//lib ft
int			ft_sqrt(int nb);
int			ft_strlen(char *str);
void		ft_strcat(char *dest, char *src);
int			ft_pow(int a, int b);
int			ft_atoi(char *str);
int			ft_strlen_to(char *str, char chr);
int			ft_intlen(int nb);
#endif

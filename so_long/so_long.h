/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:22:42 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/30 16:32:15 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "mlx.h"

typedef struct s_map
{
	char	**map;
	int		n_cols;
	int		n_lines;
	int		p_pos[2];
	int		e_pos[2];
	int		n_collec;
}	t_map;

typedef struct s_img
{
	void	*ptr;
	int		w;
	int		h;
}	t_img;

typedef struct s_mlx
{
	void	*ptr;
	void	*win;
	int		moves;
}	t_mlx;

typedef struct s_imgs
{
	t_img	p;
	t_img	b;
	t_img	w;
	t_img	c;
	t_img	e;
}	t_imgs;

typedef struct s_vars
{
	t_imgs	imgs;
	t_mlx	mlx;
	t_map	map;
}	t_vars;


int		main(int argc, char *argv[]);

void	send_error(char	*message);
void	check_valid(t_map *map);
void	check_extra(t_map map);
void	flood_fill(t_map *map);
void	free_map(t_map map);
void	graphics_main(t_vars *vars);
void	update_player(t_vars *vars, int x, int y);

void	game_main(t_vars vars);

#endif
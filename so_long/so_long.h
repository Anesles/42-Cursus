/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:22:42 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/29 14:49:06 by brumarti         ###   ########.fr       */
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
}	t_mlx;

int		main(int argc, char *argv[]);

void	send_error(char	*message);
void	check_valid(t_map *map);
void	check_extra(t_map map);
void	flood_fill(t_map map);

void	game_main(t_map map);

#endif
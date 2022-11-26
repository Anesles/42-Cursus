/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:22:42 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/26 00:17:27 by brumarti         ###   ########.fr       */
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

int		main(int argc, char *argv[]);

void	send_error(char	*message);
void	check_valid(t_map *map);
void	check_extra(t_map map);
void	flood_fill(t_map map);

#endif
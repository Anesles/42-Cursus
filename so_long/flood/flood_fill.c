/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:44:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/26 02:06:04 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

/*
static void	print_map(char **map, int max_l, int x, int y)
{
	int	i;

	i = 0;
	while (i < max_l)
		ft_printf("%s\n", map[i++]);
	ft_printf("x:%d  y:%d\n", x, y);
}
*/

static void	fill(char	***new_map, int x, int y, int max_l, int max_c)
{
	if (x < 0 || x >= max_l || y < 0 || y >= max_c || (*new_map)[x][y] == '1' || (*new_map)[x][y] == ' ')
		return ;
	else
	{
		(*new_map)[x][y] = ' ';
		//system("clear");
		//print_map(*new_map, max_l, x, y);
		//usleep(200000);
		fill(new_map, x - 1, y, max_l, max_c);
		fill(new_map, x + 1, y, max_l, max_c);
		fill(new_map, x, y - 1, max_l, max_c);
		fill(new_map, x, y + 1, max_l, max_c);
	}
}

static void check_path(char **fill_map, t_map map)
{
	int		i;
	int		j;
	int		valid;

	if ( fill_map[map.e_pos[0]][map.e_pos[1]] != ' ')
		send_error("Error\nInvalid path (Exit not reachable).");
	i = 1;
	valid = 0;
	while (i < map.n_lines)
	{
		j = 1;
		while (j < map.n_cols)
		{
			if (map.map[i][j] == 'C')
			{
				valid = 1;
				if (fill_map[i][j] != ' ')
					send_error("Error\nInvalid path (Collectible not reachable).");
			}
			j++;
		}
		i++;
	}
	if (valid == 0)
		send_error("Error\nNo collectibles.");
}

void	flood_fill(t_map map)
{
	char	**new_map;
	int		i;

	i = 0;
	new_map = (char **)malloc(map.n_lines * sizeof(char *));
	while(i < map.n_lines)
	{
		new_map[i] = ft_strdup(map.map[i]);
		i++;
	}
	fill(&new_map, map.p_pos[0], map.p_pos[1], map.n_lines, map.n_cols);
	check_path(new_map, map);
	free(new_map);
}
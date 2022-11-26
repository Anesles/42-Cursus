/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:44:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/26 00:51:42 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	print_map(char **map, int max_l, int x, int y)
{
	int	i;

	i = 0;
	while (i < max_l)
		ft_printf("%s\n", map[i++]);
	ft_printf("x:%d  y:%d\n", x, y);
}

static void	fill(char	***new_map, int x, int y, int max_l, int max_c)
{
	if (x < 0 || x >= max_l || y < 0 || y >= max_c || (*new_map)[x][y] == '1' || (*new_map)[x][y] == ' ')
		return ;
	else
	{
		(*new_map)[x][y] = ' ';
		system("clear");
		print_map(*new_map, max_l, x, y);
		sleep(1);
		fill(new_map, x - 1, y, max_l, max_c);
		fill(new_map, x + 1, y, max_l, max_c);
		fill(new_map, x, y - 1, max_l, max_c);
		fill(new_map, x, y + 1, max_l, max_c);
	}
}

static void check_path(char **fill_map, t_map map)
{
	char	**m;
	int		i;
	int		j;

	if ( fill_map[map.e_pos[0]][map.e_pos[1]] != ' ')
		send_error("Error\nInvalid path (Exit not reachable).");
	m = map.map;
	i = 0;
	while (i < map.n_lines)
	{
		j = 0;
		while (j < map.n_lines)
		{
			if (m[i][j] == 'C')
			{
				if (fill_map[i][j] != ' ')
					send_error("Error\nInvalid path (Consumable not reachable).");
			}
			j++;
		}
		i++;
	}
}

void	flood_fill(t_map map)
{
	char	**new_map;

	new_map = map.map;
	fill(&new_map, map.p_pos[0], map.p_pos[1], map.n_lines, map.n_cols);
	check_path(new_map, map);
}
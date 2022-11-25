/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:29:32 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/25 18:03:34 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	check_rectangle(t_map map, int line_len)
{
	int		i;
	char	**tmap;
	int		len;

	tmap = map.map;
	i = 1;
	len = 0;
	while (i < map.n_lines)
	{
		len = ft_strlen(tmap[i]);
		if (len != line_len)
			send_error("Not a rectangle.");
		i++;
	}
	return (line_len);
}

static void	check_closed(t_map map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map.n_lines)
	{
		if (i == 0 || i == (map.n_lines - 1))
		{
			j = 0;
			while (j < map.n_cols)
			{
				if (map.map[i][j++] != '1')
					send_error("Map not closed (top or bottom).");
			}
		}
		else
			if (map.map[i][0] != '1' || map.map[i][map.n_cols - 1] != '1')
				send_error("Map not closed (sides).");
		i++;
	}
}

static t_map	add_element(t_map map, char c, int x, int y)
{
	if (c == 'P')
	{
		if (map.p_pos[0] != 0)
		{
			map.p_pos[0] = x;
			map.p_pos[1] = y;
		}
		else
			send_error("Error\nMap has 2 P.");
	}
	else if (c == 'E')
	{
		if (map.e_pos[0] != 0)
		{
			map.e_pos[0] = x;
			map.e_pos[1] = y;
		}
		else
			send_error("Error\nMap has 2 E.");
	}
	return (map);
}

static t_map	check_elements(t_map map)
{
	t_map	ret;
	int		i;
	int		j;

	ret = map;
	i = 0;
	while (i < ret.n_lines)
	{
		if (i != 0 || i != ret.n_lines - 1)
		{
			j = 0;
			while (j < ret.n_cols)
			{
				if (ret.map[i][j] == 'E' || ret.map[i][j] == 'P')
					ret = add_element(ret, ret.map[i][j], i, j);
				j++;
			}
		}
		i++;
	}
	return (ret);
}

void	check_valid(t_map map)
{
	int	line_len;

	map.e_pos[0] = 0;
	map.p_pos[0] = 0;
	line_len = ft_strlen(map.map[0]);
	map.n_cols = check_rectangle(map, line_len);
	check_closed(map);
	map = check_elements(map);
	ft_printf("N_cols:%d;\nN_lines:%d;\n", map.n_cols, map.n_lines);
}

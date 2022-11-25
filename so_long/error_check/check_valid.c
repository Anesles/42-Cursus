/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:29:32 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/25 17:16:14 by brumarti         ###   ########.fr       */
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
	while(i < map.n_lines)
	{
		if ((int)ft_strchrr(tmap[i], '\n') != -1)
			len = ft_strlen(tmap[i]) - 1;
		else
			len = ft_strlen(tmap[i]);
		if (len != line_len)
			send_error("Not a rectangle.");
		i++;
	}
	return (line_len);
}

static void check_closed(t_map map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < map.n_lines)
	{
		if (i == 0 || i == (map.n_lines - 1))
			while (j < map.n_cols)
			{
				if (map.map[i][j++] != '1')
					send_error("Map not closed (top or bottom).");
			}
		else
			if (map.map[i][0] != '1' || map.map[i][map.n_cols - 1] != '1')
				send_error("Map not closed (sides).");
		i++;
	}
}

void	check_valid(t_map map)
{
	int line_len;

	if ((int)ft_strchrr(map.map[0], '\n') != -1)
		line_len = ft_strlen(map.map[0]) - 1;
	else
		line_len = ft_strlen(map.map[0]);
	map.n_cols = check_rectangle(map, line_len);
	check_closed(map);
	ft_printf("N_cols:%d;\nN_lines:%d;\n", map.n_cols, map.n_lines);
}
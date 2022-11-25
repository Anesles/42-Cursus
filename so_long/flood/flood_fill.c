/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:44:57 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/25 22:09:09 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static char	**convert_map(t_map map)
{
	char	**new_map;
	int	i;

	new_map = map.map;
	i = 1;
	while (i < map.n_lines)
	{
		j = 1;
		while (j < map.n_cols)
		{
			
		}
	}
}

void	flood_fill(t_map map)
{
	char	**new_map;

	new_map = convert_map(map);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 21:18:14 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/29 21:42:19 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	put_img(t_vars vars, char c, int i, int j)
{
	if (c == '1')
		mlx_put_image_to_window(vars.mlx.ptr, vars.mlx.win, \
				vars.imgs.w.ptr, j * 50, i * 50);
	else
		mlx_put_image_to_window(vars.mlx.ptr, vars.mlx.win, \
				vars.imgs.b.ptr, j * 50, i * 50);
	if (c == 'C')
		mlx_put_image_to_window(vars.mlx.ptr, vars.mlx.win, \
				vars.imgs.c.ptr, j * 50, i * 50);
	else if (c == 'E')
		mlx_put_image_to_window(vars.mlx.ptr, vars.mlx.win, \
				vars.imgs.e.ptr, j * 50, i * 50);
	else if (c == 'P')
		mlx_put_image_to_window(vars.mlx.ptr, vars.mlx.win, \
				vars.imgs.p.ptr, j * 50, i * 50);
}

static void	make_map(t_vars vars)
{
	int	i;
	int	j;

	i = 0;
	while (i < vars.map.n_lines)
	{
		j = 0;
		while (j < vars.map.n_cols)
		{
			put_img(vars, vars.map.map[i][j], i, j);
			j++;
		}
		i++;
	}
}

void	graphics_main(t_vars *vars)
{
	(*vars).imgs.p.ptr = mlx_xpm_file_to_image((*vars).mlx.ptr, \
			"textures/P.xpm", &(*vars).imgs.p.w, &(*vars).imgs.p.h);
	(*vars).imgs.w.ptr = mlx_xpm_file_to_image((*vars).mlx.ptr, \
			"textures/W.xpm", &(*vars).imgs.w.w, &(*vars).imgs.w.h);
	(*vars).imgs.c.ptr = mlx_xpm_file_to_image((*vars).mlx.ptr, \
			"textures/C.xpm", &(*vars).imgs.c.w, &(*vars).imgs.c.h);
	(*vars).imgs.b.ptr = mlx_xpm_file_to_image((*vars).mlx.ptr, \
			"textures/B.xpm", &(*vars).imgs.b.w, &(*vars).imgs.b.h);
	(*vars).imgs.e.ptr = mlx_xpm_file_to_image((*vars).mlx.ptr, \
			"textures/E.xpm", &(*vars).imgs.e.w, &(*vars).imgs.e.h);
	make_map((*vars));
}

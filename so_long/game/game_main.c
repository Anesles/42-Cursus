/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:55:49 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/29 21:38:24 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	key_hook(int keycode, t_mlx *mlx)
{
	ft_printf("Keycode: %d\n", keycode);
	if (keycode == 65307)
		mlx_loop_end(mlx->ptr);
	return (0);
}

static int	ft_close(t_mlx *mlx)
{
	mlx_loop_end(mlx->ptr);
	return (0);
}

void	game_main(t_map map)
{
	t_vars	vars;

	vars.map = map;
	vars.mlx.ptr = mlx_init();
	vars.mlx.win = mlx_new_window(vars.mlx.ptr, map.n_cols * 50, \
			map.n_lines * 50, "Teste");
	graphics_main(&vars);
	mlx_hook(vars.mlx.win, 2, 1L << 0, key_hook, &vars.mlx);
	mlx_hook(vars.mlx.win, 17, 1L << 0, ft_close, &vars.mlx);
	mlx_loop(vars.mlx.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.p.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.w.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.e.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.b.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.c.ptr);
	mlx_destroy_window(vars.mlx.ptr, vars.mlx.win);
	mlx_destroy_display(vars.mlx.ptr);
	free(vars.mlx.ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:55:49 by brumarti          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/05 14:25:58 by brumarti         ###   ########.fr       */
=======
/*   Updated: 2022/11/30 21:26:13 by brumarti         ###   ########.fr       */
>>>>>>> 7127c695e45a9ceddfa68261d2b6369b25cafce9
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == 65307)
	{
		mlx_loop_end(vars->mlx.ptr);
		return (0);
	}
	else if (keycode == 119)
		update_player(vars, vars->map.p_pos[0] - 1, vars->map.p_pos[1]);
	else if (keycode == 115)
		update_player(vars, vars->map.p_pos[0] + 1, vars->map.p_pos[1]);
	else if (keycode == 100)
		update_player(vars, vars->map.p_pos[0], vars->map.p_pos[1] + 1);
	else if (keycode == 97)
		update_player(vars, vars->map.p_pos[0], vars->map.p_pos[1] - 1);
	if (vars->mlx.endgame == 1)
		mlx_loop_end(vars->mlx.ptr);
	return (0);
}

static int	ft_close(t_mlx *mlx)
{
	mlx_loop_end(mlx->ptr);
	return (0);
}

void	game_main(t_vars vars)
{
	vars.mlx.moves = 0;
	vars.mlx.endgame = 0;
	vars.mlx.ptr = mlx_init();
	vars.mlx.win = mlx_new_window(vars.mlx.ptr, vars.map.n_cols * 50, \
			vars.map.n_lines * 50, "So_long");
	graphics_main(&vars);
	ft_printf("Moves: %d\n", vars.mlx.moves);
	mlx_hook(vars.mlx.win, 2, 1L << 0, key_hook, &vars);
	mlx_hook(vars.mlx.win, 17, 1L << 0, ft_close, &vars.mlx);
	mlx_loop_hook(vars.mlx.ptr, animations, &vars);
	mlx_loop(vars.mlx.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.p.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.w.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.e.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.b.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.c.ptr);
	mlx_destroy_image(vars.mlx.ptr, vars.imgs.p2.ptr);
	mlx_destroy_window(vars.mlx.ptr, vars.mlx.win);
	mlx_destroy_display(vars.mlx.ptr);
	free(vars.mlx.ptr);
}

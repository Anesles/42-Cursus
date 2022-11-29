/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:55:49 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/29 18:20:25 by brumarti         ###   ########.fr       */
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

static void	make_map(t_map map, t_imgs imgs, t_mlx mlx)
{
	int	i;
	int	j;

	i = 0;
	while(i < map.n_lines)
	{
		j = 0;
		while(j < map.n_cols)
		{
			if (map.map[i][j] == '1')
				mlx_put_image_to_window(mlx.ptr, mlx.win, imgs.w.ptr, j*50, i * 50);
			if (map.map[i][j] == 'P')
				mlx_put_image_to_window(mlx.ptr, mlx.win, imgs.p.ptr, j*50, i * 50);
			j++;
		}
		i++;
	}
}

void	game_main(t_map map)
{
	t_mlx	mlx;
	t_imgs	imgs;
	
	mlx.ptr = mlx_init();
	mlx.win = mlx_new_window(mlx.ptr, map.n_cols * 50, map.n_lines * 50, "Teste");
	imgs.p.ptr = mlx_xpm_file_to_image(mlx.ptr, "textures/P.xpm", &imgs.p.w, &imgs.p.h);
	imgs.w.ptr = mlx_xpm_file_to_image(mlx.ptr, "textures/W.xpm", &imgs.w.w, &imgs.w.h);
	make_map(map, imgs, mlx);
	mlx_hook(mlx.win, 2, 1L << 0, key_hook, &mlx);
	mlx_hook(mlx.win, 17, 1L << 0, ft_close, &mlx);
	mlx_loop(mlx.ptr);
	mlx_destroy_image(mlx.ptr, imgs.p.ptr);
	mlx_destroy_image(mlx.ptr, imgs.w.ptr);
	mlx_destroy_window(mlx.ptr, mlx.win);
	mlx_destroy_display(mlx.ptr);
	free(mlx.ptr);
}

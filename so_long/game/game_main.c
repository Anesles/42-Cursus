/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:55:49 by brumarti          #+#    #+#             */
/*   Updated: 2022/11/28 15:51:29 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	key_hook(int keycode, t_mlx *mlx)
{
	(void)mlx;
	ft_printf("Keycode: %d\n", keycode);
	return (0);
}

static int	ft_close(t_mlx *mlx)
{
	mlx_destroy_window(mlx->ptr, mlx->win);
	return (0);
}

void	game_main(void)
{
	t_mlx	mlx;
	t_img	img;

	mlx.ptr = mlx_init();
	mlx.win = mlx_new_window(mlx.ptr, 1920, 1080, "Teste");
	img.ptr = mlx_xpm_file_to_image(mlx.ptr, "textures/P.xpm", &img.w, &img.h);
	mlx_put_image_to_window(mlx.ptr, mlx.win, img.ptr, 0, 0);
	mlx_hook(mlx.win, 2, 1L << 0, key_hook, &mlx);
	mlx_hook(mlx.win, 17, 1L << 0, ft_close, &mlx);
	mlx_loop(mlx.ptr);
}
